/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lem_in.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cking <cking@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/27 11:39:23 by cking             #+#    #+#             */
/*   Updated: 2018/08/28 16:31:07 by cking            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"
#include <stdio.h>

t_line	*create(char *data, t_line *next)
{
	t_line *new_node;

	new_node = (t_line*)malloc(sizeof(t_line));
	if (new_node == NULL)
	{
		error(4);
	}
	new_node->data = data;
	new_node->next = next;
	return (new_node);
}

t_line	*append(t_line *head, char *data)
{
	t_line *cursor;
	t_line *new_node;

	cursor = head;
	if (cursor == NULL)
		head = create(data, NULL);

	else
	{
		while (cursor->next != NULL)
			cursor = cursor->next;
		new_node = create(data, NULL);
		cursor->next = new_node;
	}
	return (head);
}

void	check_ants(t_line *args)
{
	char *temp;

	temp = ft_itoa(ft_atoi(args->data));
	if (!ft_strequ(args->data, temp) || ft_atoi(args->data) < 0)
		error(0);
	free(temp);
}

int		isroom(char *line)
{
	int		count;
	char	**params;

	count = ft_wordcount(line, ' ');
	if (count != 3)
		return (0);
	params = ft_strsplit(line, ' ');
	return (1);
}

void	check_rooms(t_line *args)
{
	t_line	*cursor;
	int		check;

	cursor = args->next;
	check = 0;
	while (cursor->data[0])
	{
		if (cursor->data[0] == '#')
			cursor = cursor->next;
		else
		{
			if (isroom(cursor->data))
			{
				cursor = cursor->next;
				check++;
			}
		}
	}
	if (!check)
		error(1);
}

int		valid(char *line)
{
	line++;
	return (1);
}

void	print_args(t_line *args)
{
	t_line *cursor;

	cursor = args;
	while (cursor->next)
	{
		ft_putendl(cursor->data);
		cursor = cursor->next;
	}
	ft_putendl(cursor->data);
}

int		main(void)
{
	t_line	*args;
	char	**line;

	args = NULL;
	line = malloc(100);
	*line = malloc(100);
	while (get_next_line(0, line) > 0)
		args = append(args, *line);
	check_ants(args);
	print_args(args);
}
