# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nidruon <nidruon@student.42perpignan.fr    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/21 10:06:39 by jotudela          #+#    #+#              #
#    Updated: 2025/07/06 00:41:54 by nidruon          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

################################################################################
### ARGUMENTS

NAME		= rush-02
CFLAGS		= -Wall -Werror -Wextra -I includes
CC		= gcc

################################################################################
### COLORS

RESET		= \033[0m
BOLD		= \033[1m
RED		= \033[91m
GREEN		= \033[92m
YELLOW		= \033[33m
ORANGE		= \033[93m

################################################################################
### SOURCES

SRC_FILES	:= \
		src/main.c \
		src/utils/ft_convert_numbers.c \
		src/utils/ft_print.c \
		src/utils/ft_putchar.c \
		src/utils/ft_readfile.c \
		src/utils/ft_strdup.c \
		src/utils/ft_strncpy.c \
		src/utils/ft_error.c \
		src/utils/ft_process_group.c \
		src/utils/ft_putstr.c \
		src/utils/ft_strcmp.c \
		src/utils/ft_strlen.c \
		src/utils/ft_str_numbers.c

OBJ_FILES	:= $(SRC_FILES:.c=.o)

################################################################################
### RULES

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ_FILES)
	$(CC) $(CFLAGS) $(OBJ_FILES) -o $(NAME)
	@echo "$(GREEN)$(BOLD)$(NAME) successfully compiled!$(RESET)"

clean:
	rm -f $(OBJ_FILES)
	@echo "\n$(BOLD)$(YELLOW)		Cleaned .o $(NAME)'s files		$(RESET)\n"

fclean: clean
	rm -f $(NAME)
	@echo "\n$(BOLD)$(ORANGE)		Cleaned $(NAME) executable		$(RESET)\n"

re: fclean all

.PHONY: all clean fclean re
