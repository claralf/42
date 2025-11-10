/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clalfons <clalfons@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 19:57:35 by clalfons          #+#    #+#             */
/*   Updated: 2025/11/10 20:25:11 by clalfons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_free(char **ptr)
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

static size_t	ft_countwords(char const *s, char c)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
			n++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (n);
}

static char	**do_split(char const *s, char c)
{
	size_t	start;
	size_t	i;
	size_t	j;
	char	**ptr;

	i = 0;
	j = 0;
	ptr = malloc((ft_countwords(s, c) + 1) * sizeof (char *));
	if (!ptr)
		return (NULL);
	while (j < ft_countwords(s, c))
	{
		while (s[i] && s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > start)
			ptr[j] = ft_substr(s, start, i - start);
		if (!ptr[j])
			return (ft_free(ptr), NULL);
		j++;
	}
	ptr[j] = NULL;
	return (ptr);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;

	if (!s)
		return (NULL);
	ptr = do_split(s, c);
	return (ptr);
}
/*
int	main(void)
{
	char *s = "hola quee tal estamos";
	char	c = ' ';

	char  **hola = ft_split(s, c);
	int	i = 0;
	while (hola[i])
	{
		printf("%s\n", hola[i]);
		i++;
	}
	ft_free(hola);
	return 0;
}*/
