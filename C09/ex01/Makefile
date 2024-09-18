SRC_DIR = srcs
SRC = ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c main.c
SRCS = $(addprefix $(SRC_DIR)/, $(SRC))
OBJS = $(SRCS:.c=.o)
INCLUDES = includes
FLAGS = -Wall -Werror -Wextra
NAME = a.out
CC = gcc

# Default target
.DEFAULT_GOAL := all

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

$(SRC_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(FLAGS) -I $(INCLUDES) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
