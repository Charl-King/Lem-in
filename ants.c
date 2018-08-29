/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ants.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cking <cking@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 19:16:49 by cking             #+#    #+#             */
/*   Updated: 2018/08/29 17:16:15 by cking            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

void	check_ants(t_map *map, t_line *args)
{
	char	*temp;
	t_line	*cursor;

	if (!args)
		error(11);
	cursor = args;
	while (cursor->data[0] == '#')
		cursor = cursor->next;
	temp = ft_itoa(ft_atoi(cursor->data));
	if (!ft_strequ(cursor->data, temp) || ft_atoi(cursor->data) < 1)
		error(0);
	map->ants = 1;
	free(temp);
}

int		is_ants(char *str)
{
	return (ft_isnum(str));
}
