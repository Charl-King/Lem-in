/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   links.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cking <cking@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 10:20:10 by cking             #+#    #+#             */
/*   Updated: 2018/08/29 13:54:37 by cking            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

int		is_link(char *str)
{
	int wc;

	wc = ft_wordcount(str, '-');
	if (wc == 2 && str[0] != '#')
		return (1);
	return (0);
}

int		validate_link(t_map *map, char *str)
{
	char **temp;

	temp = ft_strsplit(str, '-');
	if (room_exist(map, temp[0]) && room_exist(map, temp[1]))
		return (1);
	else
		error(10);
	return (0);
}
