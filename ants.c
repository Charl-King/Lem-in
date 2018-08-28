/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ants.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cking <cking@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 19:16:49 by cking             #+#    #+#             */
/*   Updated: 2018/08/28 19:16:49 by cking            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

void	check_ants(t_line *args)
{
	char *temp;

	temp = ft_itoa(ft_atoi(args->data));
	if (!ft_strequ(args->data, temp) || ft_atoi(args->data) < 0)
		error(0);
	free(temp);
}
