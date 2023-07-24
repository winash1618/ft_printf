/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 08:45:45 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/03/04 08:45:50 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
#include "../libft/includes/libft.h"

typedef struct s_flag
{
	int zero;
  int hash;
  int dot;
  int plus;
  int minus;
  int space;
  int number_before_dot;
  int number_after_dot;
}	t_flag;

int	ft_printf(const char *arg, ...);

#endif
