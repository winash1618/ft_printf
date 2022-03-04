#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	int	n;
	int	*c = &n;
	int a;
	int b;
	n	= 172;
	a = ft_printf("\n -827 = %d \n 172 = %x \n 172 = %X \n 172 = %p \n 172 = %X \n %% = %% \n 128 = %i \n hello = %s \n d = %c \n 0 = %d", -827, -1, -4, c, 0, 0, NULL, 'd', 0);
	b = printf("\n -827 = %d \n 172 = %x \n 172 = %X \n 172 = %p \n 172 = %X \n %% = %% \n 128 = %i \n hello = %s \n d = %c \n 0 = %d", -827, -1, -4, c, 0, 0, NULL, 'd', 0);

	printf("\n a = %d \n b = %d", a, b);
	return (0);
}
