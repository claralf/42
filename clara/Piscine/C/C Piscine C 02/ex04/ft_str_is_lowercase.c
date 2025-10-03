/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clalfons <clalfons@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 19:45:23 by clalfons          #+#    #+#             */
/*   Updated: 2025/08/27 20:11:47 by clalfons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	n;

	i = 0;
	while (str[i] != '\0')
	{
		if ((96 < str[i]) && (str[i] < 123))
			n = 1;
		else
		{
			n = 0;
			return (n);
		}
		i++;
	}
	n = 1;
	return (n);
}

/*#include <stdio.h>

int	main(void)
{
	int	n;

	n = ft_str_is_lowercase("hjkjkfhkdfSFDSw");
	printf("El resultado es: %d", n);
	return (0);
}*/
