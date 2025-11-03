/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clalfons <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 22:02:34 by clalfons          #+#    #+#             */
/*   Updated: 2025/11/03 20:04:19 by clalfons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
