/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fts.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clalfons <clalfons@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 21:49:12 by clalfons          #+#    #+#             */
/*   Updated: 2025/11/11 04:58:08 by clalfons          ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
	return (1);
}

int	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = -1;
	if (!s)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (s[++i])
		ft_putchar_fd(s[i], fd);
	return (ft_strlen(s));
}

int	ft_putnbr_fd(int n, int fd)
{
	int	cnt;

	cnt = 0;
	if (n < 0)
	{
		if (n == -2147483648)
		{
			cnt = cnt + ft_putstr_fd("-2147483648", fd);
			return (cnt);
		}
		n *= -1;
		cnt = cnt + ft_putchar_fd('-', fd);
	}
	if (n > 9)
		cnt = cnt + ft_putnbr_fd(n / 10, fd);
	cnt = cnt + ft_putchar_fd((n % 10) + 48, fd);
	return (cnt);
}

int	ft_putnbr_base_fd(unsigned long n, char *base, int fd)
{
	int	cnt;

	cnt = 0;
	if (n >= (unsigned long)ft_strlen(base))
		cnt = cnt + ft_putnbr_fd((n / ft_strlen(base)), fd);
	cnt = cnt + ft_putchar_fd((n % ft_strlen(base)) + 48, fd);
	return (cnt);
}
