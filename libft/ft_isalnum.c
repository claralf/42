/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clalfons <clalfons@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 00:49:23 by clalfons          #+#    #+#             */
/*   Updated: 2025/10/13 18:43:53 by clalfons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (((47 < c) && (c < 58)) || ((64 < c) && (c < 91))
		|| ((96 < c) && (c < 123)))
		return (c);
	else
		return (0);
}

/*int	main(void)
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
