/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorsanch <lorsanch@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 15:00:58 by lorsanch          #+#    #+#             */
/*   Updated: 2025/08/31 15:44:36 by lorsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_space(char c)
{
	return (c == ' ' || c >= 9 && c <= 13);
}

int	is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_atoi(char *str)
{
	int	i;
	int	num;
	int	sign;

	i = 0;
	sign = 1;
	num = 0;
	while (str[i] != '\0')
	{
		while (is_space(str[i]))
			i++;
		if (!is_digit(str[i]))
		{
			if (str[i] == '-')
				sign *= -1;
			i++;
		}
		while (is_digit(str[i]))
		{
			num = (num * 10) + (str[i] - '0');
			i++;
		}
	}
	return (num);
}
