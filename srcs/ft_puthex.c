int ft_puthex(unsigned int hex)
{
    int     mod;
	char    chr;
	int		len;
	
	len = 0;
	if (hex)
	{
		mod = hex % 16;
		hex /= 16;
		len += ft_puthex(hex);
		if (mod < 10)
			len += ft_putchar(mod + '0');
		else
			len += ft_putchar(mod + 'a' - 10);
	}
	return (len);
}