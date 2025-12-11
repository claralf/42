#include "ft_printf.h"

int	main(void)
{
	char	*p = "ay";

	ft_printf("franco es un pelotudo jajajajajja%c\n%d\n%s\n%p\n%X\n", "hi", 'a', "hola que tal", 2, *p);
	return (0);
}
