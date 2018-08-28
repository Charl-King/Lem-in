/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lem_in.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cking <cking@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/27 11:32:51 by cking             #+#    #+#             */
/*   Updated: 2018/08/28 17:33:53 by cking            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LEM_IN_H
# define LEM_IN_H

# include "./libft/libft.h"

typedef struct	s_line
{
	char			*data;
	struct s_line	*next;
}				t_line;

void	error(int x);
t_line	*append(t_line *head, char *data);
t_line	*create(char *data, t_line *next);

#endif
