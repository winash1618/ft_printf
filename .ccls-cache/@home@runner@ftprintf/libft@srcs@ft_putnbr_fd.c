/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 11:35:04 by mkaruvan          #+#    #+#             */
/*   Updated: 2023/02/02 16:39:09 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int		c;
	char	ch;
  int i;

	ch = '\0';
	if (n == -2147483647 - 1)
	{
		i = write(fd, "-2147483648", 11);
		return ;
	}
	else if (n < 0)
		i = write(fd, "-", 1);
	if (n < 0)
		n = n * -1;
	c = n % 10;
	if (n > 9)
	{
		n = n / 10;
		ft_putnbr_fd(n, fd);
	}
	ch = c + '0';
	i = write(fd, &ch, 1);
  (void) i;
}
