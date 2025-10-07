void	ft_bzero(void *s, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		s[i] = '\0';
		i ++;
	}
}

#include <stdio.h>
#include <strings.h>

int	main(void)
{
	void	*s = "Vamos a probar";

	printf("resultado antes: %p\n", s);
	ft_bzero(s, 5);
	printf("resultado después: %p\n", s);
	return (0);
}
