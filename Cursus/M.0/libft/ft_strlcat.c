/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clalfons <clalfons@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 23:25:23 by clalfons          #+#    #+#             */
/*   Updated: 2025/10/16 08:23:51 by clalfons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	srclen;
	size_t	dstlen;
	size_t	i;

	i = 0;
	srclen = ft_strlen(src);
	dstlen = ft_strlen(dst);
	if (size <= dstlen) //size < dstlen
	{
		// while (src[i] != 0)
		// {
		// 	dst[dstlen + i] = src[i];
		// 	i ++;
		// }
		// dst[dstlen + i] = '\0';
		return (size + srclen);
	}
	if (size > dstlen)
	{
		while ((src[i] != '\0') && (dstlen + i < size - 1)) // size
		{
			dst[dstlen + i] = src[i];
			i++;
		}
		dst[dstlen + i] = '\0'; // add this shit bombaclara
		return (dstlen + srclen);
	}
	return (dstlen + srclen);
}
/*
	 int	main(void)
	 {
	 	char *dest = "oooo partir de aqui";
	 	char *dest2 = "oooo partir de aqui";

	 	int	i = (int)ft_strlcat(dest, "a", 1);
	 	int	a = strlcat(dest, "a", 1);

	 	printf("%d\n", i);
	 	printf("%d\n", a);
	 	printf("%s\n", dest);
	 	printf("%s\n", dest2);
	 	return (0);
		}*/
