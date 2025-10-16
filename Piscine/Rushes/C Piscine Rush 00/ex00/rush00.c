/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcallejo <dcallejo@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 15:16:34 by dcallejo          #+#    #+#             */
/*   Updated: 2025/08/17 18:43:30 by clalfons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	draw_s(char l_v, char m, char r_v, int x)
{
	int	now_column;

	now_column = 1;
	ft_putchar(l_v);
	now_column++;
	while (now_column < x)
	{
		ft_putchar(m);
		now_column++;
	}
	if (now_column == x)
	{
		ft_putchar(r_v);
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	now_line;

	now_line = 1;
	if (x > 0 && y > 0)
	{
		draw_s('o', '-', 'o', x);
		now_line++;
		while (now_line < y)
		{
			draw_s('|', ' ', '|', x);
			now_line++;
		}
		if (y == now_line)
		{
			draw_s('o', '-', 'o', x);
		}
	}
}
