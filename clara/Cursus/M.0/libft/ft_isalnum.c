/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clalfons <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 00:49:23 by clalfons          #+#    #+#             */
/*   Updated: 2025/10/03 00:51:52 by clalfons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((47 < c) & (c < 58) || (64 < c) & (c < 91)
		|| (96 < c) & (c < 123))
		return (c);
	else
		return (0);
}
/*
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	int	c;
	int	libft;
	int	original;

	c = 115;
	libft = ft_isalnum(c);
	original = isalnum(c);
	printf("resultado: %d\n", libft);
	printf("resultado original: %d\n", original);
	return (0);
}*/
