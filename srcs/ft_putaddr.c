int ft_putlonghex(unsigned long long longhex)
{
	int     mod;
	char    chr;
	int		len;
	
	len = 0;
	if (longhex)
	{
		mod = longhex % 16;
		longhex /= 16;
		len += ft_putlonghex(longhex);
		if (mod < 10)
			len += ft_putchar(mod + '0');
		else
			len += ft_putchar(mod + 'a' - 10);
	}
	return (len);
}

int ft_putaddr(unsigned long long addr)
{
	int len;
	
	len = ft_putstr("0x");
	if (addr == 0)
		len += ft_putchar('0');
	else
		len += ft_putlonghex(addr);
	return (len);
}