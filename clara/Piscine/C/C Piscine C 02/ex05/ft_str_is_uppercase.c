/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clalfons <clalfons@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 20:15:32 by clalfons          #+#    #+#             */
/*   Updated: 2025/08/27 20:29:35 by clalfons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	n;

	i = 0;
	while (str[i] != '\0')
	{
		if ((64 < str[i]) && (str[i] < 91))
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

	n = ft_str_is_uppercase("AHORA");
	printf("El resultado es: %d", n);
	return (0);
}*/
