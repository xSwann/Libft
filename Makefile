# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: slatrech <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/18 10:04:55 by slatrech          #+#    #+#              #
#    Updated: 2024/12/02 17:35:30 by slatrech         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_striteri.c ft_putstr_fd.c ft_putnbr_fd.c ft_putendl_fd.c ft_strmapi.c ft_itoa.c ft_putchar_fd.c ft_split.c ft_atoi.c ft_isalnum.c ft_isdigit.c ft_memcmp.c ft_memset.c ft_strjoin.c ft_strlen.c ft_strrchr.c ft_tolower.c ft_bzero.c ft_isalpha.c ft_isprint.c ft_memcpy.c ft_strchr.c ft_strlcat.c ft_strncmp.c ft_strtrim.c ft_toupper.c ft_calloc.c ft_isascii.c ft_memchr.c ft_memmove.c ft_strdup.c ft_strlcpy.c ft_strnstr.c ft_substr.c

NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
OBJ = $(SRC:.c=.o)
INC = ./includes

all: $(NAME)

$(NAME): $(OBJ)
	ar -rcs $@ $^

%.o: %.c $(INC)/*.h
	$(CC) $(CFLAGS) -I$(INC) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
