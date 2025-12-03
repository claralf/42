/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clalfons <clalfons@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 21:12:20 by clalfons          #+#    #+#             */
/*   Updated: 2025/12/01 23:27:48 by clalfons          ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*read_more(char *temp, int fd)
{
	char	*buffer;
	int	read;

	read = 0;
	buffer = malloc(sizeof(char)*(BUFFER_SIZE + 1));
	if (!buffer)
		return (NULL);
	// el 0 es nulo
	while (read && !ft_strchr(buffer, '\n')
	{
		read = read(fd, buffer, BUFFER_SIZE);
		if (read)
		{
			buffer[read] = '\0';
			temp = ft_strjoin(temp, buffer);
		}
	}
	free (buffer);
	// si he leído negativo, libero temp. Sino, devuelvo temp
}

char *get_next_line(int fd)
{
	static char	*temp;

	*temp = NULL;
	if (!fd)
		return (NULL);
	if (!temp || !ft_strchr(temp, '\n');
		temp = read_more(temp, fd);
	if (!temp)
		return (NULL);	
	// cogemos una linea del almac. con FUNCION2(almacenamiento)
	// si se ha hecho mal, liberamos almacenamiento con FUNCION3
	//modificamos el almacenamiento con FUNCION4, quitandole lo que hay aentes del primer salto de linea.	
}

/*
int	main(void)
{
	int	fd;

	fd = open(".txt", O_RDONLY);
	...
	close(fd);
}*/
