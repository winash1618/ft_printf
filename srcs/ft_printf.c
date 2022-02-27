/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@sstudent.42abudhabi.ae  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 03:25:23 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/02/27 03:25:36 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_charcheck(const char c, va_list ap)
{
    int len;
    
    len = 0;
    if (c = 'c')
        len += ft_putchar(va_args(ap, int));
    else if (c == 's')
        len += ft_putstr(va_args(ap, char *));
    else if (c == 'p')
        len += ft_putaddr(va_args(ap, unsigned long long));
    else if (c == 'd' || c = 'i')
        len += ft_putint(va_args(ap, int));
    else if (c == 'u')
        len += ft_putunint(va_args(ap, unsigned int));
    else if (c == 'x' || c == 'X')
        len += ft_puthex(va_args(ap, unsigned int));
    else if (c == '%')
        len += ft_putchar(c);
    return (len);
}

int	ft_printf(const char *str, ...)
{
    va_list ap;
    int len;
    int i;
    
    i = 0;
    r = 0;
    while (str[i])
    {
        if (str[i] != '%')
            len += ft_putchar(str[i]);
        else
            len += ft_charcheck(str[++i], ap);
        i++;
    }
    va_end(ap);
	return (len);
}
