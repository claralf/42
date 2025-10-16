/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   loading_dict.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorsanch <lorsanch@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 15:00:58 by lorsanch          #+#    #+#             */
/*   Updated: 2025/08/31 22:16:38 by lorsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void load_dict(char *filename)
{
    int fd = open(filename, O_RDONLY);
    if (fd < 0)
        return;

    char buf[8192];
    int bytes = read(fd, buf, 8191);
    close(fd);
    if (bytes <= 0)
        return;
    buf[bytes] = '\0';

    // contar cuántas líneas
    int i = 0;
    while (buf[i]) {
        if (buf[i] == '\n')
            dict_size++;
        i++;
    }
    dict = malloc(sizeof(t_entry) * dict_size);

    // parsear línea por línea
    char *p = buf;
    int entry = 0;
    while (*p) {
        // leer clave numérica
        long long key = 0;
        while (*p >= '0' && *p <= '9') {
            key = key * 10 + (*p - '0');
            p++;
        }
        while (*p == ':' || *p == ' ')
            p++;

        // inicio de la palabra
        char *start = p;
        while (*p && *p != '\n')
            p++;
        if (*p == '\n') {
            *p = '\0';
            p++;
        }

        dict[entry].key = key;
        dict[entry].word = ft_strdup(start);
        entry++;
    }
}

char **load_scales(char *filename, int *count)
{
    int fd;
    char buf[4096];
    int bytes;
    char *p;
    char **scales;
    int i;

    fd = open(filename, O_RDONLY);
    if (fd < 0)
        return NULL;
    bytes = read(fd, buf, 4095);
    close(fd);
    if (bytes <= 0)
        return NULL;
    buf[bytes] = '\0';
    // Dict puede tener hasta undecillion → 40 escalas
    *count = 40;
    scales = malloc(sizeof(char*) * (*count));
    i = 0;
    while (i < *count) {
        scales[i] = "";
        i++;
    }
    // primera escala: unidades
    scales[0] = "";
    // recorrer línea por línea
    p = buf;
    while (*p)
    {
        // obtener clave numérica
        long long key = 0;
        while (*p >= '0' && *p <= '9')
        {
            key = key * 10 + (*p - '0');
            p++;
        }
        // saltar ": "
        while (*p && (*p == ':' || *p == ' '))
            p++;
        // inicio de palabra
        char *word = p;
        // avanzar hasta fin de línea
        while (*p && *p != '\n')
            p++;
        if (*p == '\n') 
        {
            *p = '\0';
            p++;
        }

        // comprobar si la clave es potencia de 1000
        long long val = key;
        int power = 0;
        while (val > 1 && val % 1000 == 0) 
        {
            val /= 1000;
            power++;
        }
        if (val == 1 && power > 0 && power < *count)
            scales[power] = word;
    }
    return scales;
}

char *find_in_dict(long long n)
{
    int i = 0;
    while (i < dict_size)
    {
        if (dict[i].key == n)
            return dict[i].word;
        i++;
    }
    return "";
}
