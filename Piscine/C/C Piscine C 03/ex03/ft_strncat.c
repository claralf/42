/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clalfons <clalfons@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 03:22:31 by clalfons          #+#    #+#             */
/*   Updated: 2025/08/31 04:10:35 by clalfons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	n;
	unsigned int	i;

	n = 0;
	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while ((src[n] != '\0') && (n < nb))
	{
		dest[i] = src[n];
		i++;
		n++;
	}
	dest[i] = '\0';
	return (dest);
}

/*#include <stdio.h>

int	main(void)
{
	char	dest[50] = "Hola ";
	char	src[] = "mundo a partir de aquí no xd";

	ft_strncat(dest, src, 5);
	printf("%s", dest);
	return (0);
}*/
