# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jaboulka <jaboulka@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/10/13 12:13:56 by jaboulka          #+#    #+#              #
#    Updated: 2026/10/18 21:05:26 by jaboulka         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c \
	   ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c \
	   ft_toupper.c ft_tolower.c ft_strchr.c ft_strncmp.c ft_strrchr.c ft_memcmp.c \
	   ft_strnstr.c ft_memchr.c ft_calloc.c ft_strdup.c ft_calloc.c ft_strdup.c \
OBJS = $(SRCS:.c=.o)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)
all: $(NAME)
clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)
re: fclean all
.PHONY: all clean fclean re