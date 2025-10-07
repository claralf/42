void	*ft_memset(void *s, int c, int n)
{
	int	i;

	i = 0;
	unsigned char *ptr = (unsigned char *)s;
	while (i < n)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	int	c = 8;
	int	n = 5;
	char	s[10];

	ft_memset(s, c, n);
	printf("resultado: %s\n", s);
	return (0);	
}
