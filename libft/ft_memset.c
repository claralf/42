/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clalfons <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 20:52:51 by clalfons          #+#    #+#             */
/*   Updated: 2025/10/14 23:01:42 by clalfons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)s;
	while (i < n)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
/*
int	main(void)
{
	int	c = 122;
	size_t	n = 5;
	char	s[10];
	int	a = 122;
	size_t	w = 5;
	char	x[10];
	ft_memset(s, c, n);
	printf("resultado: %s\n", s);
	memset(x, a, w);
	printf("resultado original: %s\n", x);
	return (0);	
}*/
