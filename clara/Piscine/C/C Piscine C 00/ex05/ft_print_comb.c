/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clalfons <clalfons@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 14:08:05 by clalfons          #+#    #+#             */
/*   Updated: 2025/08/20 18:43:43 by clalfons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	one;
	char	two;
	char	thr;

	one = 47;
	two = 48;
	thr = 49;
	while (one++ <= 54)
	{
		while (two++ <= 55)
		{
			while (thr++ <= 56)
			{
				write(1, &one, 1);
				write(1, &two, 1);
				write(1, &thr, 1);
				if (one != 55)
					write(1, ", ", 2);
			}
			thr = two + 1;
		}
		two = one + 1;
		thr = two + 1;
	}
}

/*int	main(void)
{
	ft_print_comb();
	write(1, "\n", 1);
	return (0);
}*/
