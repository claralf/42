/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorsanch <lorsanch@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 15:00:58 by lorsanch          #+#    #+#             */
/*   Updated: 2025/08/31 23:23:30 by lorsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#ifndef HEADER_H
# define HEADER_H

typedef struct s_entry
{
	int			key;
	char		*word;
}				t_entry;

extern int		dict_size;
extern t_entry	*dict;

#endif

char			**split_in_blocks(char *str_num, int *count);
int				check_dic_ext(char *file_name);
char			*cl_left_zeros(char *numchar);
char			*r_zeros(char *numchar, int i);
int				check_num(char *numchar);
void			load_dict(char *filename);
char			**load_scales(char *filename, int *count);
void			ft_print_block(char *block);
char			*find_in_dict(long long n);
int				ft_strlen(char *str);
int				ft_atoi(char *str);
void			ft_putstr(char *str);
char			*ft_strdup(char *src);
char			*ft_strtrim(char *str);
