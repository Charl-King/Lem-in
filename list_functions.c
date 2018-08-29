/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_functions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cking <cking@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 17:32:18 by cking             #+#    #+#             */
/*   Updated: 2018/08/29 14:13:19 by cking            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

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

t_room	*init_room(char *data, t_room *next)
{
	t_room *new_node;

	new_node = (t_room*)malloc(sizeof(t_room));
	if (new_node == NULL)
	{
		error(9);
	}
	new_node->name = data;
	new_node->next = next;
	return (new_node);
}

t_room	*add_room(t_room *head, char *data)
{
	t_room *cursor;
	t_room *new_node;

	cursor = head;
	if (cursor == NULL)
		head = init_room(data, NULL);
	else
	{
		while (cursor->next != NULL)
			cursor = cursor->next;
		new_node = init_room(data, NULL);
		cursor->next = new_node;
	}
	return (head);
}
