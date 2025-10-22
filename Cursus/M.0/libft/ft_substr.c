/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clalfons <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 20:27:38 by clalfons          #+#    #+#             */
/*   Updated: 2025/10/22 21:58:30 by clalfons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*subs;
	int		i;

	i = 0;
	if (len == 0)
		return (NULL);
	subs = malloc(sizeof(char) * (len + 1));
	subs[len] = '\0';
	while (s[i])
	{
		if (s[i] == char (start))
		{
			while (subs)
			{
				subs[] = s[i];
				i++;
			}
			return (subs);
		}
		i++;
	}
	return (subs);
}
