/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clalfons <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 13:39:59 by clalfons          #+#    #+#             */
/*   Updated: 2025/08/15 14:00:48 by clalfons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_numbers(void)
{
	char	digit;

	digit = 48;
	while (digit < 58)
	{
		write(1, &digit, 1);
		digit = digit + 1;
	}
}

/*int	main(void)
{
	ft_print_numbers();
	return (0);
}*/
