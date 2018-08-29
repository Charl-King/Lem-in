/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lem_in.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cking <cking@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/27 11:39:23 by cking             #+#    #+#             */
/*   Updated: 2018/08/29 17:25:05 by cking            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

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

void	print_rooms(t_room *room)
{
	t_room *cursor;

	cursor = room;
	while (cursor->next)
	{
		ft_putendl(cursor->name);
		cursor = cursor->next;
	}
	ft_putendl(cursor->name);
}

void	validate_args(t_map *map, t_line *args)
{
	t_line *cursor;

	cursor = args->next;
	while (cursor)
	{
		if (is_room(cursor->data))
		{
			validate_room(cursor->data);
			map->roomcount++;
			map->room = add_room(map->room, get_room_name(cursor->data));
		}
		else if (is_link(cursor->data))
			map->roomcount < 1 ? error(1) : validate_link(map, cursor->data);
		else if (map->ants != 1 && is_ants(cursor->data))
			skip();
		else if (is_comment(cursor->data))
			skip();
		else if (is_command(cursor->data))
			exe_command(map, cursor);
		else
			error(7);
		cursor = cursor->next;
	}
}

int		main(void)
{
	t_map	map;
	t_line	*args;
	char	**line;

	args = NULL;
	line = malloc(100);
	*line = malloc(100);
	while (get_next_line(0, line) > 0)
		args = append(args, *line);
	check_ants(&map, args);
	validate_args(&map, args);
	if (!map.start || !map.end)
		error(8);
	print_args(args);
	ft_putendl("");
	ft_putstr("L1-");
	ft_putendl(map.room->next->name);
	exit(0);
}
