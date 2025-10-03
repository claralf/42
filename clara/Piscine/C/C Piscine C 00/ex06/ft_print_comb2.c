/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clalfons <clalfons@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 01:52:21 by clalfons          #+#    #+#             */
/*   Updated: 2025/08/21 18:32:28 by clalfons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*void	digits(int num1, int num2)
{
	char	print_num:
	print_num = num1 / 10 
	
}

void	ft_print_comb2(void)
{
	int	num1;
	int	num2;

	num1 = 0;
	num2 = num1++;
	while (num1++ < 98)
	{
		while (num2++ <= 99)
		{
			digits(num1, num2);		
		}
		num2 = num1++
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}*/

void	ft_print_comb2(void)
{
	char	a = 47;
	char	b = 47;
	char	c = 47;
	char	d = 48;

	while (a++ < 57)
	{
		while (b++ < 57)
		{
			while (c++ < 57)
			{
				while (d++ <57)
				{
					write(1, &a, 1);
					write(1, &b, 1);
					write(1, " ", 1);
					write(1, &c, 1);
					write(1, &d,1);
					write(1, ", ", 2);
				}
				d = 47;
			}
			c = a - 1;
			d = b + 1;
		}
		b = a - 1;
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
