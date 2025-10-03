 **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: clalfons <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/01 16:23:46 by clalfons          #+#    #+#              #
#    Updated: 2025/10/01 17:26:43 by clalfons         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
SOURCE = ft_isalpha.c ft_isdigit.c \
		ft

OBJ = $(SOURCE:.c=.o)
INCLUDE = libft.h
RM = rm -f

all: 
	$(NAME)

clean: 
	$(RM) $(OBJ)


%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

.DEFAULT_GOAL= all
