#include "ft_printf.h"

int ft_char(const char c, va_list ap)
{
    int len;
    
    len = 0;
    if (c = 'c')
        len += ft_putchar(va_args(ap, int));
    else if (c == 's')
        len += ft_putstr(va_args(ap, char *));
    else if (c == 'p')
        len += ft_putptr(va_args(ap, unsigned long long));
    else if (c == 'd' || c = 'i')
        len += ft
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
        {
            len += ft_putchar(str[i]);
        }
        else
        {
            len += ft_char(str[i + 1], ap);
        }
        i++;
    }
    va_end(ap);
	return (len);
}