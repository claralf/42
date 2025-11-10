/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clalfons <clalfons@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 21:50:31 by clalfons          #+#    #+#             */
/*   Updated: 2025/11/10 18:36:53 by clalfons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if ((64 < c) && (c < 91))
		return (c + 32);
	else
		return (c);
}
/*
int	main(void)
{
	printf("%d\n", ft_tolower(73));
	return (0);
}*/
