# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: clalfons <clalfons@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/01 16:23:46 by clalfons          #+#    #+#              #
#    Updated: 2025/11/11 04:01:54 by clalfons         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
SOURCE = ft_printf.c \
	fts.c \

OBJ = $(SOURCE:.c=.o)
RM = @rm -f

all: $(NAME)

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)
	@echo "\033[32mprintf compilada con éxito"

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

.DEFAULT_GOAL= all
