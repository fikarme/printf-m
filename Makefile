# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akdemir <akdemir@student.42istanbul.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/15 21:38:36 by akdemir           #+#    #+#              #
#    Updated: 2023/07/21 15:30:55 by akdemir          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libftprintf.a
SRC		=	ft_printf.c ft_put.c
OBJS	=	$(SRC:.c=.o)
CC		=	gcc
CFLAGS	=	-Wall -Werror -Wextra
RM		=	rm -rf
AR		=	ar crs

all: $(NAME)

$(NAME): $(OBJS)
		$(AR) $(NAME) $(OBJS)

clean:
		$(RM) $(OBJS)

fclean:
		$(RM) $(NAME) $(OBJS)

re:	fclean all

.PHONY:	all clean fclean re
