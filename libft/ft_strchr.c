/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clalfons <clalfons@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 21:50:08 by clalfons          #+#    #+#             */
/*   Updated: 2025/11/10 18:38:18 by clalfons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if ((char)c == 0)
		return ((char *)&s[i]);
	return (NULL);
}

/*
int	main(void)
{
	printf("%s\n", ft_strchr("teste", 'e'));
	printf("%s\n", strchr("teste", 'e'));
	printf("%s\n", ft_strchr("teste", '\0'));
	printf("%s\n", strchr("teste", '\0'));
}*/
