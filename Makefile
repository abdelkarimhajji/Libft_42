# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/15 18:00:26 by ahajji            #+#    #+#              #
#    Updated: 2022/10/17 17:24:14 by ahajji           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_isalnum.c \
	ft_isprint.c \
	ft_isalpha.c \
	ft_strlen.c \
	ft_isdigit.c \
	ft_isascii.c \
	ft_memset.c \
	ft_bzero.c \
	ft_memcpy.c \
	ft_strlcpy.c \
	ft_strlcat.c \
	ft_toupper.c \
	ft_tolower.c \
	ft_strchr.c \
	ft_strrchr.c \
	ft_strncmp.c \
	ft_memcmp.c \
	ft_memchr.c \
	ft_strnstr.c \
	ft_calloc.c \
	ft_strdup.c \
	ft_strtrim.c \
	ft_atoi.c \
	ft_substr.c \
	ft_strjoin.c \
	ft_putchar_fd.c \
	ft_putstr_fd.c \
	ft_putendl_fd.c \
	ft_strmapi.c \
	ft_striteri.c \
	ft_split.c \
	ft_itoa.c \
	ft_memmove.c \
	ft_putnbr_fd.c \

OBJ = ft_isalnum.o \
	ft_isprint.o \
	ft_isalpha.o \
	ft_strlen.o \
	ft_isdigit.o \
	ft_isascii.o \
	ft_memset.o \
	ft_bzero.o \
	ft_memcpy.o \
	ft_strlcpy.o \
	ft_strlcat.o \
	ft_toupper.o \
	ft_tolower.o \
	ft_strchr.o \
	ft_strrchr.o \
	ft_strncmp.o \
	ft_memcmp.o \
	ft_memchr.o \
	ft_strnstr.o \
	ft_calloc.o \
	ft_strdup.o \
	ft_strtrim.o \
	ft_atoi.o \
	ft_substr.o \
	ft_strjoin.o \
	ft_putchar_fd.o \
	ft_putstr_fd.o \
	ft_putendl_fd.o \
	ft_strmapi.o \
	ft_striteri.o \
	ft_split.o \
	ft_itoa.o \
	ft_memmove.o \
	ft_putnbr_fd.o \

all: $(NAME)

$(NAME): $(OBJ)
	@ar -r $(NAME) $(OBJ)

$(OBJ): $(SRC)
	@gcc -Wall -Wextra -Werror -c $(SRC)
clean:
	@rm -f *.o

fclean: clean
	@rm -f libft.a

re: fclean all