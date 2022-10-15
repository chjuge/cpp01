# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mproveme <mproveme@student.21-school.ru    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/13 18:52:44 by mproveme          #+#    #+#              #
#    Updated: 2022/10/15 18:32:31 by mproveme         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	main.cpp\
			Zombie.cpp\
			zombieHorde.cpp


OBJS	= 	$(SRCS:.c=.o)

HEAD	=	Zombie.hpp

CC		=	c++
CFLAGS	=	-Wall -Wextra -Werror

RM		=	rm -rf

NAME	=	zombie

all:		$(NAME)

%.o:		%.c	$(HEAD) 
			$(CC) $(CFLAGS) -cpp $< -o $@

$(NAME):	$(OBJS) $(HEAD) 
			$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:		
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re 