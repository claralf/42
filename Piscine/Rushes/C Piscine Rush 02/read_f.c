/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_f.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clalfons <clalfons@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 19:12:11 by clalfons          #+#    #+#             */
/*   Updated: 2025/08/31 19:38:54 by clalfons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

int	handle_line(char *line, t_dcit *dict)
{
	char	*p;
	int	i;
	int	len;

	p[]  = remove_space(line);
	i = 0;
	if (!p) return = (0);
	while ((p[i]) && (p[i] => '0') && (p[i] <= '9'))
		i++;
	ft_strncpy((*dict).key, p, i);
	while ((p[i]) && (p[i] => 'A') && (p[i] <= 'Z')) 
			|| (p[i] => 'a') && (p[i] <= 'z'))

		i++;
	if (p[i] =='\0')
		return (-2);
	i++;

	p = remove_space(&p[i]);
	ft_strcpy((*dict).value, p);

	int	len;

	len = ft_strlen((*dict).value);
	while ((len > 0) && ((*dict).value[len-1] == ' ')
	{
		dict->value[--len] = '\0';
	}
	return (1);
}

int	count_bytes_dict(char *file)
{
	int count;
	char c;
	int fd;
}
