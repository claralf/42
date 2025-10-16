/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clalfons <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 21:56:21 by clalfons          #+#    #+#             */
/*   Updated: 2025/08/15 13:07:10 by clalfons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	letra;

	letra = 96;
	while (letra < 122)
	{
		letra = letra +1;
		write(1, &letra, 1);
	}
}

/*int	main(void)
{
	ft_print_alphabet();
	return (0);
}*/
