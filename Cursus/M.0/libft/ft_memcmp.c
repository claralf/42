/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clalfons <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 16:43:35 by clalfons          #+#    #+#             */
/*   Updated: 2025/10/22 16:59:39 by clalfons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	return (ft_strncmp((const char *)s1, (const char *)s2, n));
}
/*
int	main(void)
{
	char	*s1 = "holaquetal";
	char	*s2 = "holaqu0tal";

	printf("%d\n", ft_memcmp(s1, s2, 10);
	printf("%d\n", memcmp(s1, s2, 10);
	return (0);
}*/
