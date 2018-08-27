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

void	addline(t_line *list, char *str)
{
	t_line	*new;

	new->next = NULL;
	new->data = str;
	while (list->next)
		list = list->next;
	list->next = new;
}

int		main(void)
{
	t_line	*args;
	char	**line;

	line = malloc(10);
	*line = malloc(10);
	while (get_next_line(0, line) > 0)
		addline(args, *line);
}
