/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cking <cking@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/27 12:14:42 by cking             #+#    #+#             */
/*   Updated: 2018/08/29 13:49:01 by cking            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

void	error(int x)
{
	char	*error[11];

	error[0] = "Invalid ants.";
	error[1] = "Invalid rooms.";
	error[2] = "Start and end not valid.";
	error[3] = "No valid path.";
	error[4] = "Error reading args.";
	error[5] = "Empty line present.";
	error[6] = "Negative coords not allowed.";
	error[7] = "Invalid line present in farm.";
	error[8] = "Invalid start/end room.";
	error[9] = "Error creating room.";
	error[10] = "Invalid link";
	ft_putendl_fd(error[x], 2);
	exit(1);
}

void	skip(void)
{
	return ;
}
