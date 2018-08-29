/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cking <cking@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 11:31:35 by cking             #+#    #+#             */
/*   Updated: 2018/08/29 12:26:44 by cking            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

int		is_command(char *str)
{
	return (str[0] == '#' && str[1] == '#');
}

void	start(t_map *map, t_line *node)
{
	t_line *cursor;

	cursor = node->next;
	if (is_room(cursor->data))
		map->start = 1;
	else
		error(8);
}

void	end(t_map *map, t_line *node)
{
	t_line *cursor;

	cursor = node->next;
	if (is_room(cursor->data))
		map->end = 1;
	else
		error(8);
}

void	exe_command(t_map *map, t_line *cursor)
{
	if (ft_strequ(cursor->data, "##start"))
		start(map, cursor);
	if (ft_strequ(cursor->data, "##end"))
		end(map, cursor);
}
