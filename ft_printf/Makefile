# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: luferna3 <luferna@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/01 16:23:46 by clalfons          #+#    #+#              #
#    Updated: 2025/11/11 04:01:54 by luferna3         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
SOURCE = ft_printf.c

LIBFT_DIR = $(SRC_DIR)libft
LIBFT = $(LIBFT_DIR)/libft.a
OBJ = $(SOURCE:.c=.o)
INCLUDE = libft.h
RM = @rm -f

all: $(LIBFT) $(NAME)

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ) $(LIBFT)
	@echo "\033[32mprintf compilada con exito"

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)
	@echo "\033[32mlibft compilada con exito"


clean:
	$(MAKE) -C $(LIBFT_DIR) clean
	$(RM) $(OBJ)

fclean: clean
	$(MAKE) -C $(LIBFT_DIR) fclean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

.DEFAULT_GOAL= all
