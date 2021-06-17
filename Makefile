# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ioleinik <ioleinik@student.42wolfsburg.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/26 12:52:22 by ioleinik          #+#    #+#              #
#    Updated: 2021/06/17 06:20:28 by ioleinik         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= clang
CFLAGS	= -Wall -Wextra -Werror -g

AR		= ar rcs
RM		= rm -f

SRC		= main.c

OBJ		= ${SRC:.c=.o}

main:
			$(CC) $(CFLAGS) -c main.c
			$(CC) $(CFLAGS) main.o -I. libftprintf.a
			$(RM) main.o

clean:		
			$(RM) $(OBJ) a.out

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY: all clean fclean re