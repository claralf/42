/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clalfons <clalfons@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 04:12:36 by clalfons          #+#    #+#             */
/*   Updated: 2025/09/01 18:07:03 by clalfons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	if (to_find[n] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while ((str[i + n] == to_find[n]) || (to_find[n] == '\0'))
		{
			if (to_find[n] == '\0')
			{
				return (&str[i]);
			}
			n++;
		}
		n = 0;
		i++;
	}
	return (0);
}

/*#include <stdio.h>

int	main(void)
{
	char	str[] = "Con diez cañones por banda";
	char	to_find[] = "cañones";
	char	*nuevo;

	nuevo = ft_strstr(str, to_find);
	printf("%s", nuevo);
	return (0);
}*/
