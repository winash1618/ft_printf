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

IDIR = includes/

OBJS = $(SRCS:.c=.o)

NAME =	libftprintf.a

CFLAGS	= -Wall -Werror -Wextra -I$(IDIR) -Ilibft/includes/

all	: $(NAME)

%.o:	%.c
		$(CC) $(CFLAGS) -c $< -o $@


$(NAME) : $(LIBFT) $(OBJS)
		ar rcs $(NAME) $(OBJS) $(LIBFT)


$(LIBFT) :
		make -C libft

clean :
		make clean -C libft
		rm -f $(OBJS)

fclean : clean
		make fclean -C libft
		rm -f $(NAME)

re : fclean all
