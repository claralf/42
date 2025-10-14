/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clalfons <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 15:10:33 by clalfons          #+#    #+#             */
/*   Updated: 2025/10/13 19:44:07 by clalfons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/*int	main(void)
{
	char	*s = "caracola";
	int		libft;
	int		original;

	libft = ft_strlen(s);
	original = strlen(s);
	printf("resultado: %d\n", libft);
	printf("resultado original: %d\n", original);
	return (0);
}*/
