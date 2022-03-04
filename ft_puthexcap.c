/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexcap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 09:16:32 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/03/03 09:59:51 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int ft_puthexcap(unsigned int hex)
{
    int     mod;
	int		len;
	
	len = 0;
	if (hex > 9)
	{
		mod = hex % 16;
		hex /= 16;
		len += ft_puthexcap(hex);
		if (mod < 10)
			len += ft_putchar(mod + '0');
		else
			len += ft_putchar(mod + 'A' - 10);
	}
	else if (hex >= 0)
	{
		len += ft_putchar(hex + '0');
	}
	return (len);
}
