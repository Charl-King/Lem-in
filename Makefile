# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cking <cking@student.wethinkcode.co.za>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/27 13:18:20 by cking             #+#    #+#              #
#    Updated: 2018/08/27 13:18:20 by cking            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= lem_in

all:	$(NAME)

lib:	
	make re -C ./libft/
	make clean -C ./libft/

SRC= error.c lem_in.c

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