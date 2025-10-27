/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clalfons <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 22:39:08 by clalfons          #+#    #+#             */
/*   Updated: 2025/10/27 21:46:54 by clalfons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	find(char *s1, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != s1)
	{
		if (!set[i])
			return (0);
		i++;
	}
	return (1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	len;
	int	i;
	int	res;

	len = ft_strlen(s1);
	i = 0;
	if (!set)
		return (s1);
	while (res == 1)
	{
		res = find(s1[i], set);
		if (res == 0)
				
	}
}
