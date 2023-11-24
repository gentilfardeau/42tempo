# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tbras <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/17 14:48:36 by tbras             #+#    #+#              #
#    Updated: 2023/11/24 16:59:18 by tbras            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

HEADERS = libft.h

CC = cc

CFLAGS = -Werror -Wextra -Wall 

AR = ar -rcs

SRC = \
	ft_isalpha.c \
	ft_isdigit.c \
	ft_isalnum.c \
	ft_isascii.c \
	ft_isprint.c \
	ft_strlen.c \
	ft_memset.c \
	ft_bzero.c \
	ft_memcpy.c \
	ft_strlcpy.c \
	ft_toupper.c \
	ft_tolower.c \
	ft_strchr.c \
	ft_strrchr.c \
	ft_strncmp.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_atoi.c \
	ft_calloc.c \
	ft_strdup.c \
	ft_strlcat.c \
	ft_memmove.c \
	ft_strnstr.c \
	ft_substr.c \
	ft_strjoin.c \
	ft_strtrim.c \
	ft_putchar_fd.c \
	ft_putstr_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c \
	ft_itoa.c \

OBJ = $(SRC:.c=.o)

all : $(NAME) 

$(NAME) : $(OBJ)
	$(AR) $(NAME) $(OBJ)
so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRC)
	gcc -nostartfiles -shared -o libft.so $(OBJ)

clean : 
	rm -rf $(OBJ) 

fclean : clean
	 rm -rf $(NAME)	

re : fclean $(NAME)

.PHONY : all clean fclean re
