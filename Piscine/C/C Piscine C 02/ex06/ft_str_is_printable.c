/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clalfons <clalfons@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 20:33:29 by clalfons          #+#    #+#             */
/*   Updated: 2025/08/28 13:04:31 by clalfons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;
	int	n;

	i = 0;
	while (str[i] != '\0')
	{
		if ((31 < str[i]) && (str[i] < 127))
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

	n = ft_str_is_printable("¶");
	printf("El resultado es: %d", n);
	return (0);
}*/
