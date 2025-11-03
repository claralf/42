/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clalfons <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 22:39:08 by clalfons          #+#    #+#             */
/*   Updated: 2025/11/03 20:14:32 by clalfons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	find(char s1, char const *set)
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
	int	f;
	char	*sol;

	len = ft_strlen(s1);
	i = 0;
	f = 1;
	if (!set)
		return ((char *)s1);
	if (!s1)
		return (NULL);
	while (f == 1)
	{
		f = find(s1[i], set);
		i++;		
	}
	f = 1;
	while (f == 1)
	{
		f = find(s1[len], set);
		len--;
	}
	sol = malloc(sizeof(char) * (len - i + 1));
	if (!sol)
		return (0);
	return(sol);
}
