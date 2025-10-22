/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clalfons <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 21:48:35 by clalfons          #+#    #+#             */
/*   Updated: 2025/10/22 21:58:59 by clalfons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	const char	*temp;

	i = 0;
	temp = (const char *)s;
	while (temp[i] && i < n)
	{
		if (temp[i] == c)
			return ((void *)&s[i]);
		i++;
	}
	if (c == 0)
		return ((void *)&s[i]);
	return (NULL);
}
/*
void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*r;
	i = 0;
	while (i < n)
	{
		r = ft_strchr((const char *)s, c);
		i++;
	}
}*/
