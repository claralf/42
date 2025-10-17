#include "libft.h" 

char	*ft_strrchr(const char *s, int c)
 {
	int	i;

	i = strlen(s);
	while (i >= 0)
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
 }

 /* #include <string.h>
#include <stdio.h>

int	main(void)
{
	char	*s = "holacaracola";
	printf("%s\n", ft_strrchr(s, 'c'));
	printf("%s\n", strrchr(s, 'c'));
}*/
