int ft_putstr(char *str)
{
	int len;
	int i;
	
	len = 0;
	i = 0;
	while (str[i])
	{
		len += ft_putchar(str[i++]);
	}
	return (len);
}