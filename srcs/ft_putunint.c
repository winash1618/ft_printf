int ft_putunint(unsigned num)
{
    int     mod;
	char    chr;
	int		len;
	
	len = 0;
	if (num)
	{
		mod = num% 10;
		num /= 10;
		len += ft_putunint(num);
		len += ft_putchar(mod + '0');
	}
	return (len);
}