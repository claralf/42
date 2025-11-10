/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clalfons <clalfons@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 20:27:38 by clalfons          #+#    #+#             */
/*   Updated: 2025/11/10 19:06:02 by clalfons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
