/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clalfons <clalfons@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 05:51:33 by clalfons          #+#    #+#             */
/*   Updated: 2025/08/27 16:22:30 by clalfons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
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
	char	*src = "Vamo a probar";
	int	i;

	i = ft_strlen(src);
	char	dest[i];

	ft_strcpy(dest, src);
	printf("la string devuelta es : %s\n", dest);
	return (0);
}*/
