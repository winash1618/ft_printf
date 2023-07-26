/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 03:25:23 by mkaruvan          #+#    #+#             */
/*   Updated: 2023/06/28 08:13:53 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void get_every_details(char *s, t_flag *flags)
{
  int i = 0;
  while (s[i] && !ft_isdigit(s[i]) && s[i] != '.')
  {
    if (s[i] == '+')
      flags->plus = 1;
    else if (s[i] == '-')
      flags->minus = 1;
    else if (s[i] == ' ')
      flags->space = 1;
    else if (s[i] == '#')
      flags->hash = 1;
    i++;
  }
  if (s[i] == '0')
  {
    flags->zero = 1;
    i++;
  }
  if (s[i] == '.')
  {
    flags->dot = 1;
    i++;
  }
  if (ft_isdigit(s[i]))
  {
    if (flags->dot)
      flags->number_after_dot = ft_atoi(&s[i]);
    else
      flags->number_before_dot = ft_atoi(&s[i]);
  }
  while(s[i] && ft_isdigit(s[i]))
  {
    i++;
  }
  if (s[i] == '.')
  {
    if (!flags->dot)
      flags->dot = 1;
    i++;
  }
  if (ft_isdigit(s[i]))
  {
    if (flags->dot)
      flags->number_after_dot = ft_atoi(&s[i]);
    else
      flags->number_before_dot = ft_atoi(&s[i]);
  }
  
}

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		len;
	int		i;
  t_flag flags;

	i = 0;
  ft_memset(&flags, 0, sizeof(t_flag));
	va_start(ap, str);
  len = ft_strlen(str);
	while (i < len)
	{
		if (str[i] == '%')
    {
      int j = i;
      while (ft_strchr("cspdiuxX%", str[i + 1]) == NULL && i < (int) ft_strlen(str) )
        i++;
      char *s = ft_substr(str, j + 1, i - j + 1);
      printf("\nRest : %s---\n", s);
      get_every_details(s, &flags);
      printf("plus flag: %d", flags.plus);
      printf("minus flag: %d", flags.minus);
      printf("dot flag: %d", flags.dot);
      printf("zero flag: %d", flags.zero);
      printf("hash flag: %d", flags.hash);
      printf("space flag: %d", flags.space);
      printf("number before dot: %d", flags.number_before_dot);

      printf("number after dot: %d", flags.number_after_dot);
      
      if (i < len)
        i++;
    }
    else
      if (write(1, &str[i], 1) == -1) {}
    i++;
	}
	va_end(ap);
	return (len);
}
