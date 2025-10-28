/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clalfons <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 23:31:58 by clalfons          #+#    #+#             */
/*   Updated: 2025/10/15 17:35:03 by clalfons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*temp;
	unsigned char		*dest2;

	temp = (unsigned char *)src;
	dest2 = (unsigned char *)dest;
	i = 0;
	if ((dest == NULL) && (src == NULL))
		return (NULL);
	while (i < n)
	{
		dest2[i] = temp[i];
		i ++;
	}
	return (dest);
}
/*
int	main(void)
{
	char	dest[20] = "eeeeeeeeee";
	char	dest2[20] = "eeeeeeeeee";
	char	*src = "aaaaaaaaaaaa";

	printf("resultado: %s\n", (char *)ft_memcpy(dest, src, 3));
	printf("resultado original: %s\n", (char *)memcpy(dest2, src, 3));
	return (0);
}*/
