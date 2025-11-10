/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clalfons <clalfons@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 18:54:46 by clalfons          #+#    #+#             */
/*   Updated: 2025/10/13 19:04:58 by clalfons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if ((31 < c) && (c < 127))
		return (c);
	else
		return (0);
}

/*int	main(void)
{
	int	c;
	int	libft;
	int	original;

	c = 32;
	libft = ft_isprint(c);
	original = isprint(c);
	printf("resultado: %d\n", libft);
	printf("resultado original: %d\n", original);
	return (0);
}*/
