#include "libft.h"

int	ft_tolower(int c)
{
	if ((64 < c) && (c < 91))
		return (c + 32);
	else
		return (c);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_tolower(73));
	return (0);
}*/
