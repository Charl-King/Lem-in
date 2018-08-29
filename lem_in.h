/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lem_in.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cking <cking@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/27 11:32:51 by cking             #+#    #+#             */
/*   Updated: 2018/08/29 14:26:25 by cking            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LEM_IN_H
# define LEM_IN_H

# include "./libft/libft.h"

typedef	struct		s_line
{
	char			*data;
	struct s_line	*next;
}					t_line;

typedef	struct		s_room
{
	char			*name;
	int				*links;
	struct s_room	*next;
}					t_room;

typedef	struct		s_map
{
	int				roomcount;
	int				start;
	int				end;
	t_room			*room;
	t_line			*args;
}					t_map;

void				error(int x);
t_line				*append(t_line *head, char *data);
t_line				*create(char *data, t_line *next);
void				check_ants(t_line *args);
int					is_room(char *str);
int					validate_room(char *str);
void				skip(void);
int					is_link(char *str);
int					validate_link(t_map *map, char *str);
int					is_comment(char *str);
int					is_command(char *str);
void				start(t_map *map, t_line *node);
void				end(t_map *map, t_line *node);
void				exe_command(t_map *map, t_line *cursor);
t_room				*init_room(char *data, t_room *next);
t_room				*add_room(t_room *head, char *data);
char				*get_room_name(char *str);
int					room_exist(t_map *map, char *name);

#endif
