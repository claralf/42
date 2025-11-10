/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clalfons <clalfons@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 19:54:10 by clalfons          #+#    #+#             */
/*   Updated: 2025/10/14 23:38:57 by clalfons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	s = ft_memset(s, '\0', n);
}
/*
int	main(void)
{
	char	*s = "Vamos a probar";

	printf("resultado antes: %s\n", s);
	ft_bzero(s, 5);
	printf("resultado después: %s\n", s);
	return (0);
}*/
