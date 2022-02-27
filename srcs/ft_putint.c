int ft_putint(int num)
{
    int     mod;
	char    chr;
	int		len;
	
	len = 0;
	if (num < 0)
	{
	    num = -num;
	    len += ft_putchar('-');
	}
	else if (num > )
	{
		mod = longhex % 10;
		num /= 10;
		len += ft_putlonghex(num);
		len += ft_putchar(mod + '0');
	}
	return (len);
}