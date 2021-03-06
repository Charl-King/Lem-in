# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cking <cking@student.wethinkcode.co.za>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/27 13:18:20 by cking             #+#    #+#              #
#    Updated: 2018/08/29 14:48:49 by cking            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= lem-in

all:	lib $(NAME)

lib:	
	make re -C ./libft/
	make clean -C ./libft/

SRC= error.c lem_in.c list_functions.c ants.c rooms.c links.c comments.c commands.c

OBJ= $(SRC:.c=.o)

$(NAME):
		gcc -Wall -Werror -Wextra -c $(SRC)
		gcc -o $(NAME) $(OBJ) ./libft/libft.a

clean:
		rm -f *.o

fclean:		clean
		rm -rf $(NAME)

re:		fclean all
		make clean