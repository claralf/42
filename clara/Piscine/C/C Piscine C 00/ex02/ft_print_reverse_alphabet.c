/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clalfons <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 13:11:29 by clalfons          #+#    #+#             */
/*   Updated: 2025/08/15 13:37:29 by clalfons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	letra;

	letra = 122;
	while (letra > 96)
	{
		write(1, &letra, 1);
		letra = letra -1;
	}
}

/*int	main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}*/
