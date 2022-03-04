/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 07:42:07 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/03/04 08:33:48 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
int ft_puthex(unsigned int hex)
{
    int     mod;
	int		len;
	
	len = 0;
	mod = hex % 16;
	if (hex > 15)
	{
		//printf("%u\n", hex);
		//mod = hex % 16;
		hex /= 16;
		len += ft_puthex(hex);
	}
	if (mod < 10)
		len += ft_putchar(mod + '0');
	else
		len += ft_putchar(mod + 'a' - 10);
	// else if (hex >= 0)
	// {
	// 	printf("%u \n ", hex);
	// 	len += ft_putchar(hex + '0');
	// }
	return (len);
}
