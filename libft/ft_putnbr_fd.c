/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clalfons <clalfons@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 21:49:35 by clalfons          #+#    #+#             */
/*   Updated: 2025/11/10 19:39:26 by clalfons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
