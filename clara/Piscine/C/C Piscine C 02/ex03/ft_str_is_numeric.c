/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clalfons <clalfons@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 00:45:22 by clalfons          #+#    #+#             */
/*   Updated: 2025/08/27 17:55:32 by clalfons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	n;
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((47 < str[i]) && (str[i] < 58))
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

	n = ft_str_is_numeric("@#~½");
	printf("El resultado es %d", n);
	return (0);
}*/
