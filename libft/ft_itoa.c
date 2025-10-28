/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clalfons <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 18:54:30 by clalfons          #+#    #+#             */
/*   Updated: 2025/10/28 20:10:55 by clalfons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_itoa(int n)
{
	char	*stritoa;
	long int	n2;
	int	cnt;

	cnt = 0;
	if (n == 0)
	{
		stritoa = ft_strdup("0");
		return (stritoa); 
	}
	if (n < 0)
	{
		cnt++;
		n = n * -1;
	}
	n2 = n;
	while (n2 > 0)
	{
		n2 = n2/10;
		cnt++;
	}
	stritoa = malloc(sizeof(char) * (cnt + 1));
	if (!stritoa)
		return (NULL);
	stritoa[cnt] = '\0';
	while (n != 0)
	{
		stritoa[--cnt] = (n%10) + 48;
		n = (n/10);
		cnt--;
	}
	return (stritoa);
}

int	main(void)
{
	int	n = -9;

	printf("%s\n", ft_itoa(n));
	return (0);
}
