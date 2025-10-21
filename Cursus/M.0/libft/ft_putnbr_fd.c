#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = -1;
	while (s[++i])
		ft_putchar_fd(s[i], fd);
}

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{
		if (n == -2147483648)
		{
			ft_putstr_fd("-2147483648", fd);
			return ;
		}
		n *= -1;
		ft_putchar_fd('-', fd);
	}
	if (n > 9)
		ft_putnbr_fd(n / 10, fd);
	ft_putchar_fd((n % 10) + '0', fd);
}
/*
int	main(void)
{
	int	n = 4;
	char	*c = "gjadjflkdjflkd";

	ft_putchar_fd(c[n], 1);
	ft_putchar_fd('\n', 1);
	ft_putstr_fd(c, 1);
	ft_putchar_fd('\n', 1);
	ft_putendl_fd(c, 1);
	ft_putnbr_fd(n, 1);
}*/
