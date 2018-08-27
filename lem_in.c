/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lem_in.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cking <cking@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/27 11:39:23 by cking             #+#    #+#             */
/*   Updated: 2018/08/27 11:39:23 by cking            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

t_line	*create(char *data, t_line *next)
{
	t_line* new_node;
	
	new_node = (t_line*)malloc(sizeof(t_line));
	if(new_node == NULL)
	{
		error(4);
	}
	new_node->data = data;
	new_node->next = next;
	return(new_node);
}

t_line	*append(t_line *head, char *data)
{
	t_line *cursor = head;
	while(cursor->next != NULL)
		cursor = cursor->next;
	t_line* new_node =  create(data,NULL);
	cursor->next = new_node;
	return head;
}

int		main(void)
{
	t_line	*args;
	char	**line;

	line = malloc(100);
	*line = malloc(100);
	while (get_next_line(0, line) > 0)
		args = append(args, *line);
}
