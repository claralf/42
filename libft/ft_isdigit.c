/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clalfons <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 00:32:38 by clalfons          #+#    #+#             */
/*   Updated: 2025/10/13 18:35:29 by clalfons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if ((47 < c) && (c < 58))
		return (c);
	else
		return (0);
}

/*int	main(void)
{
	int	c;
	int	libft;
	int	original;

	c = 51;
	libft = ft_isdigit(c);
	original = isdigit(c);
	printf("resultado: %d\n", libft);
	printf("resultado original: %d\n", original);
	return (0);
}*/
