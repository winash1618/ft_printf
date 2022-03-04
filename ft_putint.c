/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putint.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 07:42:18 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/03/03 09:45:56 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putint(int num)
{
    int     mod;
	int		len;
	
	len = 0;
	if (num < 0)
	{
	    num = -num;
	    len += ft_putchar('-');
	}
	if (num > 9)
	{
		mod = num % 10;
		num /= 10;
		len += ft_putint(num);
		len += ft_putchar(mod + '0');
	}
	else if (num > -1)
	{
		len += ft_putchar(num + '0');
	}
	return (len);
}
