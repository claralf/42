int	ft_isascii(int c)
{
	if ((0 <= c) && (c <= 127))
		return (1);
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

	c = -1;
	libft = ft_isascii(c);
	original = isascii(c);
	printf("resultado: %d\n", libft);
	printf("resultado original: %d\n", original);
	return (0);
}*/
