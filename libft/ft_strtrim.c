/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clalfons <clalfons@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 22:39:08 by clalfons          #+#    #+#             */
/*   Updated: 2025/11/08 07:37:43 by clalfons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	find(char s1, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != s1)
	{
		if (!set[i])
			return (0);
		i++;
	}
	return (1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		len;
	int		i;
	int		i2;
	char	*sol;

	len = ft_strlen(s1);
	i = 0;
	while (s1[i] && find(s1[i], set))
		i++;
	while (len > i && find(s1[len - 1], set))
		len--;
	sol = malloc(sizeof(char) * (len - i + 1));
	if (!sol)
		return (NULL);
	i2 = 0;
	while (i < len)
	{
		sol[i2] = s1[i];
		i++;
		i2++;
	}
	sol[i2] = '\0';
	return (sol);
}

// int main(void)
// {
// 	char	*s1 = "hjajajajja";
// 	char	*set = "jah";

// 	printf("%s\n", ft_strtrim(s1, set));
// 	return 0;
// }
