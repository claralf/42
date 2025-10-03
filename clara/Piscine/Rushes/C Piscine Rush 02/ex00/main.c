/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorsanch <lorsanch@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 15:00:58 by lorsanch          #+#    #+#             */
/*   Updated: 2025/08/31 23:27:19 by lorsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	check_args(int argc, char *argv[], char **num)
{
	char	*target;

	if (argc < 2 || argc > 3)
	{
		write(2, "Error\n", 6);
		return (1);
	}
	if (argc == 2)
		target = argv[1];
	else
	{
		if (check_dic_ext(argv[1]) != 0)
			return (1);
		target = argv[2];
	}
	if (check_num(target) != 0)
		return (1);
	if (target[0] == '0')
		*num = cl_left_zeros(target);
	else
		*num = target;
	return (0);
}

int	main(int argc, char *argv[])
{
	int count;
	int i;
	char **blocks;
	char **scales;
	char *num;

	if (check_args(argc, argv, &num))
		return (1);
	load_dict("numbers.dict");
	count = 0;
	scales = load_scales("numbers.dict", &count);
	blocks = split_in_blocks(num, &count);
	i = count - 1;
	while (i >= 0)
	{
		ft_print_block(blocks[i]);
		if (i > 0 && ft_strlen(scales[i]) > 0)
		{
			write(1, " ", 1);
			write(1, scales[i], ft_strlen(scales[i]));
		}
		if (i > 0)
			write(1, " ", 1);
		free(blocks[i]);
		i--;
	}
	free(blocks);
	write(1, "\n", 1);
	return (0);
}