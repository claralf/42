/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   program.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorsanch <lorsanch@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 15:00:58 by lorsanch          #+#    #+#             */
/*   Updated: 2025/08/31 23:23:40 by lorsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		dict_size = 0;
t_entry	*dict = NULL;

char	**split_in_blocks(char *str_num, int *count)
{
	int		len;
	char	**blocks;
	int		end;
	int		i;
		int start;
		int size;
		int j;

	// printf("\nstr_num es %s\n", str_num);
	len = ft_strlen(str_num);
	*count = (len + 2) / 3;
	// printf("\nDigitos %d | Salen %d bloques\n", len, *count);
	blocks = malloc(sizeof(char *) * (*count));
	end = len;
	i = 0;
	while (end > 0)
	{
		start = end - 3;
		if (start < 0)
			start = 0;
		size = end - start;
		// printf("end es %d | size es %d\n", end, size);
		blocks[i] = malloc(size + 1);
		j = 0;
		while (j < size)
		{
			blocks[i][j] = str_num[start + j];
			// printf("blocks[i][j] %d\n", blocks[i][j]);
			j++;
		}
		blocks[i][size] = '\0';
		end -= 3;
		i++;
	}
	return (blocks);
}

void	ft_print_block(char *block)
{
	int	n;
	int	i;
	int	tens;
		int hundreds;

	n = 0;
	i = 0;
	while (block[i])
	{
		n = n * 10 + (block[i] - '0');
		i++;
	}
	// printf("\n[block] Texto: %s | Numero: %d\n", block, n);
	if (n == 0)
		ft_putstr(find_in_dict(0)); // imprime "zero" si existe en dict
	if (n >= 100)
	{
		hundreds = n / 100;
		ft_putstr(find_in_dict(hundreds));
		write(1, " ", 1);
		ft_putstr(find_in_dict(100));
		n = n % 100;
		if (n != 0)
			write(1, " ", 1);
	}
	if (n >= 20)
	{
		tens = (n / 10) * 10;
		ft_putstr(find_in_dict(tens));
		n = n % 10;
		if (n != 0)
		{
			write(1, " ", 1);
			ft_putstr(find_in_dict(n));
		}
	}
	else if (n > 0)
	{
		ft_putstr(find_in_dict(n));
	}
}
