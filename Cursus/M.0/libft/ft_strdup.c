/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clalfons <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 18:59:11 by clalfons          #+#    #+#             */
/*   Updated: 2025/10/22 19:10:19 by clalfons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int	i;
	char	*str;
	int	len;

	i = 0;
	len = ft_strlen(s);
	str = malloc(sizeof(char)*(len + 1));
	str[len] = '\0';
	while (str[i] != '\0')
	{
		str[i] = s[i];
		i++; 
	}
	return (str);
}
