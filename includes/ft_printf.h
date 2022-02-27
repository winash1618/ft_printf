#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdard.h>
# include <unistd.h>

int ft_printf(const char *arg, ...);
int ft_charcheck(const char c, va_list ap);
int ft_putlonghex(unsigned long long longhex);
int ft_putaddr(unsigned long long addr);
int ft_putchar(int c);
int ft_putstr(char *str);
int ft_putint(int num);
int ft_putunint(unsigned num);
int ft_puthex(unsigned int hex);

#endif
