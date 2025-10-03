/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cl_left_zeros.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorsanch <lorsanch@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 13:04:45 by alendine          #+#    #+#             */
/*   Updated: 2025/08/31 19:27:03 by lorsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	*r_zeros(char *numchar, int i)
{
	int		j;
	char	*res;

	j = 0;
	while (numchar[j] != '\0')
		j++;
	res = (char *)malloc(j - i);
	if (!res)
		return (NULL);
	j = 0;
	while (numchar[i] != '\0')
	{
		res[j] = numchar[i];
		i++;
		j++;
	}
	res[j] = '\0';
	return (res);
}

char	*cl_left_zeros(char *numchar)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (numchar[0] == '0' && numchar[1] == '\0')
		return (numchar);
	else
	{
		while (numchar[i] != '\0')
		{
			if (numchar[i] != '0')
				return (r_zeros(numchar, i));
			else
				i++;
		}
		return (numchar);
	}
}

// int	main(void)
// {
// 	char	*argument;

// 	argument = "00006545440005454";
// 	printf("D funcion -->%s \n", cl_left_zeros(argument));
// }
