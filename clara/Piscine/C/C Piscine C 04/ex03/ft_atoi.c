/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clalfons <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 09:54:00 by clalfons          #+#    #+#             */
/*   Updated: 2025/09/04 12:03:49 by clalfons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	nb;

	sign = 1;
	i = 0;
	nb = 0;
	while ((str[i] == 9) || (str[i] == 10) || (str[i] == 11)
		|| (str[i] == 12) || (str[i] == 13) || (str[i] == 32))
	{
		i++;
	}
	while ((str[i] == '+') || (str[i] == '-'))
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	while ((47 < str[i]) && (str[i] < 58))
	{
		nb = nb * 10 +(str[i] - 48);
		i++;
	}
	return (nb * sign);
}

/*#include <stdio.h>

int	main(void)
{
	int	n;

	n = ft_atoi(" ---+--+1234ab567");
	printf("%d", n);
	return (0);
}*/
