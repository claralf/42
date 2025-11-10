/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clalfons <clalfons@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 16:46:45 by clalfons          #+#    #+#             */
/*   Updated: 2025/10/13 18:31:15 by clalfons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if (((64 < c) && (c < 91)) || ((96 < c) & (c < 123)))
		return (c);
	else
		return (0);
}
/*
int	main(void)
{
	int	c;
	int	libft;
	int	original;

	c = 112;
	libft = ft_isalpha(c);
	original = isalpha(c);
	printf("resultado: %d\n", libft);
	printf("resultado original: %d\n", original);
	return (0);
}*/
