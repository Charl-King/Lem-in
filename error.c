/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cking <cking@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/27 12:14:42 by cking             #+#    #+#             */
/*   Updated: 2018/08/27 12:14:42 by cking            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

void	error(int x)
{
	char	*error[4];

	error[0] = "Invalid ants.";
	error[1] = "Invalid rooms.";
	error[3] = "Start and end not valid.";
	error[4] = "No valid path.";
	ft_putendl_fd(error[x], 2);
}
