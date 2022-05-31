#include <stdio.h>
#include <stdarg.h>

int sample(void *s, ...)
{
	va_list game;

	va_start(game, s);
	char c = 'a';
	char *str = (char *)s;
	char *s2 = str;
	while (*str)
	{
		c = va_arg(game, int);
		printf("%d\n", c);
		str++;
	}
	while(*s2)
	{
		char *f = va_arg(game, char *);
		printf("%s\n",f);
		s2++;
	}
	int *d = va_arg(game, int *);
	int i = 0;
	while (d[i])
	{
		printf("%d ", d[i]);
		i++;
	}
	
	return (c);
}


int main()
{
	char *s = "hi";
	
	char *str = "hie";
	char *str2 = "Mistre";
	int x[3] = {1, 2, 3};
	sample((void *)s, 1, 2, str, str2, x);
	return (0);
}
