# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkaruvan <mkaruvan@student.42abudhabi.a    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/27 04:47:02 by mkaruvan          #+#    #+#              #
#    Updated: 2023/06/27 17:32:28 by mkaruvan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = srcs/ft_printf.c

LIBFT = libft/libft.a

IDIR = includes

OBJS = $(SRCS:.c=.o)

NAME =	libftprintf.a

CFLAGS	= -Wall -Werror -Wextra -I$(IDIR)

$(NAME)	: $(OBJS) $(LIBFT)
		ar rcs $(NAME) $(OBJS) $(LIBFT)

all	: $(NAME)

$(LIBFT) :
		make -C libft

clean :
		make clean -C libft
		rm -f $(OBJS)

fclean : clean
		make fclean -C libft
		rm -f $(NAME)

re : fclean all
