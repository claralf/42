#include <stdio.h>
#include <stdarg.h>

int	ftype(char type, va_list *args)
{
	if (type == '%')
		return(ft_putchar_fd("%", 1));
	else if (type == 'c')
		return(ft_putchar_fd(type, 1));
	else if (type == 's')
		return(ft_putstr_fd(va_arg(args, char *), 1));
	else if (type == 'd' || type == 'i')
		return(ft_putnbr_fd(va_arg(args, int), 1));
	else if (type == 'x')
		return(ft_putnbr_base_fd(va_arg(args, unsigned long), 1));
	else if (type == 'X')
		return(ft_putnbr_base_fd(va_arg(args, unsigned long), 1));
	else if (type == 'u')
		return(ft_putnbr_base_fd(va_arg(args, unsigned long), 1));
	else if (type == 'p')
		return(ft_putnbr_base_fd(va_arg(args, unsigned long), 1));
}
int ft_printf(const char *s, ...)
{
	va_list	args;
	int	cnt;
	int	i;

	va_start(args, s);
	cnt = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == '%' && s[i+1] != 0)
		{
			i++;
			cnt = cnt + ftype(s[i], args);	
		}
		else
		{
			ft_putchar_fd(s[i], fd);
			cnt++;
		}
		i++;
	}
	va_ends(args);
	return (cnt);
}

int main(void)
{
	int	hola = 19999999;
	char	*hola2 = "hahahahahahhahaha :)";
	printf("%d\n%i\n%s\n hola clara", hola, hola, hola2);
	return 0;
}
