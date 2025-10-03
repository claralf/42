/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcallejo <dcallejo@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 15:16:34 by dcallejo          #+#    #+#             */
/*   Updated: 2025/08/17 18:39:30 by clalfons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_seq(char l_vertex, char mid_char, char r_vertex, int x)
{
	int	current_col;

	current_col = 1;
	ft_putchar(l_vertex);
	current_col++;
	while (current_col < x)
	{
		ft_putchar(mid_char);
		current_col++;
	}
	if (current_col == x)
	{
		ft_putchar(r_vertex);
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	current_row;

	current_row = 1;
	if (x > 0 && y > 0)
	{
		print_seq('A', 'B', 'C', x);
		current_row++;
		while (current_row < y)
		{
			print_seq('B', ' ', 'B', x);
			current_row++;
		}
		if (y == current_row)
		{
			print_seq('C', 'B', 'A', x);
		}
	}
}
