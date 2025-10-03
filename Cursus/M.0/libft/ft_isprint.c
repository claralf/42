int	ft_isprint(int c)
{
	if ((31 < c) && (c < 127))
		return (c);
	else
		return (0);
}
/*
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	int	c;
	int	libft;
	int	original;

	c = 32;
	libft = ft_isprint(c);
	original = isprint(c);
	printf("resultado: %d\n", libft);
	printf("resultado original: %d\n", original);
	return (0);
}*/
