/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rooms.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cking <cking@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 18:24:56 by cking             #+#    #+#             */
/*   Updated: 2018/08/28 18:24:56 by cking            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

int		is_room(char *str)
{
	return (ft_wordcount(str, ' ') == 3 && str[0] != '#');
}

int		validate_room(char *str)
{
	char **temp;

	temp = ft_strsplit(str, ' ');
	if (temp[1][0] == '-' || temp [2][0] == '-')
		error(6);
	if (ft_isnum(temp[1]) && ft_isnum(temp[2]))
	{
		free (temp[0]);
		free (temp[1]);
		free (temp[2]);
		free (temp);
		return (1);
	}
	else
		error(1);
	return (1);
}
