#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	size_t	len;
	char	*sol;

	i = 0;
	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	sol = malloc(sizeof(char) * len + 1);
	if (!sol)
		return (NULL);
	while (s[i])
	{
		sol[i] = f(i, s[i]);
		i++;
	}
	sol[i] = '\0';
	return (sol);
}

/*static char	ft_ft(unsigned int i, char c)
{
	if (i % 2 == 0)
		return (ft_tolower(c);
	return (ft_toupper(c);

}

int	main(void)
{
	char 	*s = "hola";
	
	printf("%s\n", s);
	printf("%s\n", ft_strmapi(s, ft_ft);
	return (0);
}*/
