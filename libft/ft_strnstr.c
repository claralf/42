/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clalfons <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 17:01:34 by clalfons          #+#    #+#             */
/*   Updated: 2025/10/22 17:47:27 by clalfons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	ib1;
	size_t	ib2;
	size_t	il;

	ib1 = 0;
	ib2 = 0;
	il = 0;
	if (!little)
		return ((char *)&big[ib1]);
	while ((big[ib1]) && ib1 < len)
	{
		if (big[ib1] == little[il])
		{
			while (big[ib1 + ib2] == little[il])
			{
				if (!little)
					return ((char *)&big[ib1]);
				ib2++;
				il++;
			}
			il = 0;
			ib2 = 0;
		}
		ib1++;
	}
	return (NULL);
}
