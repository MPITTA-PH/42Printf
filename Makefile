# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: miguelhenriques <miguelhenriques@studen    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/23 15:10:30 by miguelhenri       #+#    #+#              #
#    Updated: 2024/12/26 18:10:48 by miguelhenri      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf

SRCS_DIR = ./srcs
SRCS = $(addprefix $(SRCS_DIR)/, ft_printf.c ft_print_format.c ft_putchar.c \
	ft_putstr.c ft_putnbr.c ft_putunbr.c ft_puthexa.c ft_putptr.c)

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@ar rc $(NAME) $(OBJS)
	@echo "$(NAME) created"

clean:
	@$(RM) $(OBJS)
	@echo "objects deleted"

fclean: clean
	@$(RM) $(NAME)
	@echo "ft_printf deleted"

re: clean all

.PHONY: all clean fclean re
