# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkaruvan <mkaruvan@student.42abudhabi.a    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/27 04:47:02 by mkaruvan          #+#    #+#              #
#    Updated: 2023/06/22 10:52:14 by mkaruvan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = srcs/ft_putchar.c \
       srcs/ft_putint.c \
       srcs/ft_putunint.c \
	   srcs/ft_printf.c \
       srcs/ft_putaddr.c \
       srcs/ft_puthex.c \
	   srcs/ft_putstr.c \
	   srcs/ft_puthexcap.c

IDIR = includes

OBJS = $(SRCS:.c=.o)

NAME =	libftprintf.a

CFLAGS	= -Wall -Werror -Wextra -I$(IDIR)

$(NAME)	: $(OBJS)
		ar rcs $(NAME) $(OBJS)

all	: $(NAME)

clean :
		rm -f $(OBJS)

fclean : clean
		rm -f $(NAME)

re : fclean all
