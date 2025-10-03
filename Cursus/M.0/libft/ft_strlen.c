/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clalfons <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 15:10:33 by clalfons          #+#    #+#             */
/*   Updated: 2025/10/03 15:33:55 by clalfons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*s = "hola";
	int		libft;
	int		original;

	libft = ft_strlen(s);
	original = strlen(s);
	printf("resultado: %d\n", libft);
	printf("resultado original: %d\n", original);
	return (0);
}*/
