/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clalfons <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 17:01:34 by clalfons          #+#    #+#             */
/*   Updated: 2025/11/08 03:42:36 by clalfons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	ib;
	size_t	il;

	ib = 0;
	il = 0;
	if (!little[il])
		return ((char *)big);
	while (big[ib] && (ib < len))
	{
		if (big[ib] == little[il])
		{
			while ((big[ib + il] == little[il] || !little[il]))
			{
				if (!little[il])
					return ((char *)&big[ib]);
				if ((ib + il) == len && little[il])
					return (NULL);
				il++;
			}
			il = 0;
		}
		ib++;
	}
	return (NULL);
}
