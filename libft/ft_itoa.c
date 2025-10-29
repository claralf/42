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

char	*ft_itoa(int n)
{
	char	*sol;
	long int	n2;
	int	cnt;

	cnt = 0;
	if (n == 0)
	{
		sol = ft_strdup("0");
		return (sol); 
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
	sol = malloc(sizeof(char) * (cnt + 1));
	if (!sol)
		return (NULL);
	sol[cnt] = '\0';
	while (n != 0)
	{
		sol[--cnt] = (n%10) + 48;
		n = (n/10);
		cnt--;
	}
	return (sol);
}

/*int	main(void)
{
	int	n = -9;

	printf("%s\n", ft_itoa(n));
	return (0);
}*/
