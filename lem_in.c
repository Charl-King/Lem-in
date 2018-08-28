/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lem_in.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cking <cking@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/27 11:39:23 by cking             #+#    #+#             */
/*   Updated: 2018/08/28 17:38:48 by cking            ###   ########.fr       */
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

int		main(void)
{
	t_line	*args;
	char	**line;

	args = NULL;
	line = malloc(100);
	*line = malloc(100);
	while (get_next_line(0, line) > 0)
		args = append(args, *line);
	args = append(args, "END");
	check_ants(args);
	print_args(args);
}
