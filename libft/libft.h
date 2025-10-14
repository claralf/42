/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clalfons <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 17:58:40 by clalfons          #+#    #+#             */
/*   Updated: 2025/10/14 23:15:14 by clalfons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

/* Ponemos librerías que queremos incluidas*/

#include <stdio.h> //Aparentemente estas las borramos antes de entregar
#include <ctype.h>
#include <string.h>
#include <strings.h>
#include <unistd.h>
#include <stdlib.h> //Malloc
#include <stddef.h> //size_t

int			ft_isalpha(int c);
int			ft_isdigit(int c);
int			ft_isalnum(int c);
int			ft_isascii(int c);
int			ft_isprint(int c);
size_t	ft_strlen(const char *s);
void	*ft_memset(void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n);

#endif
