/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clalfons <clalfons@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 19:24:30 by clalfons          #+#    #+#             */
/*   Updated: 2025/08/27 17:15:34 by clalfons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	a;
	unsigned int	i;

	a = n;
	i = 0;
	while ((src[i] != '\0') && (i < a))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*#include <stdio.h>

int	ft_strlen(char	*src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	main(void)
{
	char	*src = "Vamos a probarrrrrr";
	int	i;

	i  = ft_strlen(src);
	char	dest[i];

	ft_strncpy(dest, src, 11);
	printf("La cadena es: %s", dest);
	return (0);
}*/
