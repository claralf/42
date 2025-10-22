/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clalfons <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 21:50:39 by clalfons          #+#    #+#             */
/*   Updated: 2025/10/22 21:50:41 by clalfons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if ((96 < c) && (c < 123))
		return (c - 32);
	else
		return (c);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_toupper(100));
	return (0);
}*/
