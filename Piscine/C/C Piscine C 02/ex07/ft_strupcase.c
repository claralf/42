/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clalfons <clalfons@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 13:08:58 by clalfons          #+#    #+#             */
/*   Updated: 2025/08/28 15:33:58 by clalfons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((96 < str[i]) && (str[i] < 123))
			str[i] = str[i] - 32;
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*#include <stdio.h>

int	main(void)
{
	char	str[] = "funciona???? 42";

	ft_strupcase(str);
	printf("%s", str);
	return (0);
}*/
