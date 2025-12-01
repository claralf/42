/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clalfons <clalfons@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 15:10:33 by clalfons          #+#    #+#             */
/*   Updated: 2025/10/16 02:17:40 by clalfons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

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

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len1;
	int		len2;
	int		i;
	int		a;
	char	*s3;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	i = -1;
	a = 0;
	s3 = malloc(sizeof (char) * (len1 + len2 + 1));
	if (!s3)
		return (0);
	s3[len1 + len2] = '\0';
	while (s1[++i] != '\0')
		s3[i] = s1[i];
	while (s2[a] != '\0')
	{
		s3[i] = s2[a];
		i++;
		a++;
	}
	return (s3);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*subs;
	int		i;
	int		count;

	i = 0;
	if (ft_strlen(s) <= start)
		count = 0;
	else if (len >= (ft_strlen(s) - start))
		count = ft_strlen(s) - start;
	else
		count = len;
	subs = malloc(sizeof(char) * (count + 1));
	if (!subs)
		return (NULL);
	while (i < count)
	{
		subs[i] = s[start];
		i++;
		start++;
	}
	subs[i] = '\0';
	return (subs);
}
