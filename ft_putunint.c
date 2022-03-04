/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 07:42:47 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/03/04 08:34:07 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putunint(unsigned n)
{
	int	mod;
	int	len;
	


	len = 0;
	mod = n % 10;
	if (n > 9)
	{
		n = n / 10;
		len += ft_putint(n);
	}
	len += ft_putchar(mod + '0');
	return (len);
	// if (num)
	// {
	// 	mod = num% 10;
	// 	num /= 10;
	// 	len += ft_putunint(num);
	// 	len += ft_putchar(mod + '0');
	// }
	// return (len);
}
