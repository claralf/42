/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clalfons <clalfons@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 18:54:30 by clalfons          #+#    #+#             */
/*   Updated: 2025/11/08 10:43:32 by clalfons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*char	*ft_itoa(int n)
{
	int	cnt;

	cnt = 0;
	
	if (n < 0)
		cnt = 1;
	while (n / 10 != 0)
		cnt++;
	cnt++;
	
}*/

char	*sol(int n)
{

}

char	*ft_itoa(int n)
{
	char	*sol;
	int		n2;
	int		cnt;
	int		flag;

	cnt = 0;
	flag = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	if (n < 0)
	{
		cnt++;
		n = n * -1;
		flag = 1;
	}
	n2 = n;
	while (n2 > 0)
	{
		n2 = n2 / 10;
		cnt++;
	}
	sol = malloc(sizeof(char) * (cnt + 1));
	if (!sol)
		return (NULL);
	if (flag == 1)
		sol[0] = '-';
	if (!sol)
		return (NULL);
	sol[cnt] = '\0';
	while (n != 0)
	{
		sol[--cnt] = (n % 10) + 48;
		n = (n / 10);
	}
	return (sol);
}

/*int	main(void)
{
	int	n = -9;

	printf("%s\n", ft_itoa(n));
	return (0);
}*/
