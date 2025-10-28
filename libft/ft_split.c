/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clalfons <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 19:57:35 by clalfons          #+#    #+#             */
/*   Updated: 2025/10/27 22:05:30 by clalfons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_free(char **ptr)
{
	int	i;

	i = 0;
	while (ptr[i])
	{
		free(ptr[i]);
		i++;
	}
	free(ptr);
}

int	ft_countwords(char const *s, char c)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		n++;
		while (s[i] != c)
			i++;
	}
	return (n);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	char	**ptr;
	size_t	start;
	size_t	j;

	i = 0;	
	j = 0;
	if (!s)
		return (NULL);
	ptr = malloc((ft_countwords(s, c)  + 1) * sizeof (char *));
	if (!ptr)
		return (NULL);
	ptr[ft_countwords(s, c)] = NULL;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > start)
			ptr[j] = ft_substr(s, start, i);
		if (!ptr[j])
			return (ft_free(ptr), NULL);
		j++;
	}
	return (ptr);
}
