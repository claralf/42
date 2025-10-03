/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clalfons <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 18:10:39 by clalfons          #+#    #+#             */
/*   Updated: 2025/09/02 18:13:46 by clalfons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	a;

	i = 0;
	a = 0;
	while ((dest[i] != '\0') && (i < size))
	{
		i++;
	}
	while (src[a] != '\0')
	{
		dest[i] = src[a];
		i++;
		a++;
	}
	dest[i] = '\0';
	return (i - 1);
}

/*#include <stdio.h>

int	main(void)
{
	char	dest[500] = "A ver qué ponemos aquí";
	char	*src = "allí";
	unsigned int	print;

	print = ft_strlcat(dest, src, 18);
	printf("%d", print);
	return (0);
}*/
