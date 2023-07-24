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

// void get_every_details(char *s)
// {
//   int i = 0;
//   while (s[i])
//     {
//       if (s[i] == '')
//     }
// }

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		len;
	int		i;

	i = 0;
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
      // get_every_details(s);
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
