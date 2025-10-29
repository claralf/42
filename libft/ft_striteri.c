void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f(i, &s[i]); 
		i++;
	}
}
/*
void	*ft_ft(unsigned int i, char *s)
{
	
}

int	main(void)
{
	char	*s = "hola";

	printf("%s\n", ft_striteri(s, ft_ft);
	return (0);
}*/
