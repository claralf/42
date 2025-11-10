/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clalfons <clalfons@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 18:54:30 by clalfons          #+#    #+#             */
/*   Updated: 2025/11/10 19:28:20 by clalfons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_sol(char *sol, int cnt, int flag, int n)
{
	if (flag == 1)
		sol[0] = '-';
	sol[cnt] = '\0';
	while (n != 0)
	{
		sol[--cnt] = (n % 10) + 48;
		n = (n / 10);
	}
	return (sol);
}

int	get_cnt(int n2, int cnt)
{
	while (n2 > 0)
	{
		n2 = n2 / 10;
		cnt++;
	}
	return (cnt);
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
	cnt = get_cnt(n2, cnt);
	sol = malloc(sizeof(char) * (cnt + 1));
	if (!sol)
		return (NULL);
	return (ft_sol(sol, cnt, flag, n));
}

/*int	main(void)
{
	int	n = -9;

	printf("%s\n", ft_itoa(n));
	return (0);
}*/
