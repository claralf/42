/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorsanch <lorsanch@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 10:58:55 by alendine          #+#    #+#             */
/*   Updated: 2025/08/31 20:20:22 by lorsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	check_num(char *numchar)
{
	int	i;

	i = 0;
	while (numchar[i] != '\0')
	{
		if (numchar[i] >= '0' && numchar[i] <= '9')
			i++;
		else
		{
			write(2, "Error\n", 6);
			return (1);
		}
	}
	return (0);
}

int	check_dic_ext(char *file_name)
{
	int	file_descriptor;

	file_descriptor = open(file_name, O_RDONLY);
	if (file_descriptor == -1)
	{
		write (2, "Error\n", 6);
		return (1);
	}
	else
		close(file_descriptor);
	return (0);
}

// int	main(int argc, char *argv[])
// {
// 	if (argc < 2 || argc > 3)
// 	{
// 		write (2, "Error\n", 6);
// 		return (1);
// 	}
// 	if (argc == 2)
// 	{
// 		if (check_num(argv[1]) != 0)
// 			return (1);
// 		if (argv[1][0] == '0')
// 			cl_left_zeros(argv[1]);
// 			//lo que devuelve cl_left_zeros es el número sin ceros a la izquierda
// 	}
// 	if (argc == 3)
// 	{
// 		if (check_num(argv[2]) != 0)
// 			return (1);
// 		if (check_dic_ext(argv[1]) != 0)
// 			return (1);
// 		if (argv[2][0] == '0')
// 			cl_left_zeros(argv[2]);
// 			//lo que devuelve cl_left_zeros es el número sin ceros a la izquierda
// 	}
// }
