/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clalfons <clalfons@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 21:49:12 by clalfons          #+#    #+#             */
/*   Updated: 2025/11/11 04:58:08 by clalfons          ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ftype2(char type, va_list args)
{
	unsigned long	ptr;

	ptr = 0;
	if (type == 'X')
		return (ft_putnbr_base_fd((unsigned int)va_arg(args, unsigned int),
				"0123456789ABCDEF", 1));
	else if (type == 'u')
		return (ft_putnbr_base_fd((unsigned int)va_arg(args, unsigned int),
				"0123456789", 1));
	else if (type == 'p')
	{
		ptr = va_arg(args, unsigned long);
		if (ptr == 0)
			return (ft_putstr_fd("0x0", 1));
		write(1, "0x", 2);
		return (ft_putnbr_base_fd(ptr,
				"0123456789abcdef", 1) + 2);
	}
	return (-1);
}

int	ftype(char type, va_list args)
{
	int	digit;

	if (type == '%')
		return (ft_putchar_fd('%', 1));
	else if (type == 'c')
		return (ft_putchar_fd(va_arg(args, int), 1));
	else if (type == 's')
		return (ft_putstr_fd(va_arg(args, char *), 1));
	else if (type == 'd' || type == 'i')
	{
		digit = va_arg(args, int);
		if ((-2147483648 <= digit) && (digit <= 2147483647))
			return (ft_putnbr_fd(digit, 1));
	}
	else if (type == 'x')
		return (ft_putnbr_base_fd((unsigned int)va_arg(args, unsigned int),
				"0123456789abcdef", 1));
	else
		return (ftype2(type, args));
	return (-1);
}

int	ft_printf(const char *s, ...)
{
	va_list			args;
	int				cnt;
	int				i;

	va_start(args, s);
	cnt = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == '%' && s[i + 1] != 0)
		{
			i++;
			cnt = cnt + ftype(s[i], args);
		}
		else
		{
			ft_putchar_fd(s[i], 1);
			cnt++;
		}
		i++;
	}
	va_end(args);
	return (cnt);
}
