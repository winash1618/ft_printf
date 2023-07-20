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


int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		len;
	int		i;

	len = 0;
	i = 0;
	va_start(ap, str);
	while (str[i])
	{
		if (str[i] == '%')
    {
      int j = 0;
      while (j < i)
      {
        if (write(1, &str[j], 1) == -1) {}
        j++;
        
      }
      while (ft_strchr("cspdiuxX%", str[i + 1]) == NULL && i < (int) ft_strlen(str))
        i++;
    }
    i++;
	}
	va_end(ap);
	return (len);
}
