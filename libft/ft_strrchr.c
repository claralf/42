/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clalfons <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 21:50:17 by clalfons          #+#    #+#             */
/*   Updated: 2025/10/22 21:50:19 by clalfons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}
/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	*s = "teste";
	printf("%s\n", ft_strrchr(s, '\0'));
	printf("%s\n", strrchr(s, '\0'));
}*/
