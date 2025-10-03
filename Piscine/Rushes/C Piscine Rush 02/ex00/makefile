NAME = exe
SRC = main.c program.c ft_strlen.c ft_putstr.c ft_atoi.c ft_print_struct.c ft_strdup.c loading_dict.c cl_left_zeros.c rush02.c
OBJ = $(SRC:.c=.o)
HEADER = header.h
CC = cc
# CFLAGS = -Wall -Wextra -Werror

all: $(NAME)
	./$(NAME) 0010

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
