# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/25 17:25:34 by anoukan           #+#    #+#              #
#    Updated: 2024/04/27 13:25:30 by anoukan          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror -g3
NAME = libft.a

INCDIR = includes

SRC =   ft_isalpha.c\
        ft_isdigit.c\
        ft_isalnum.c\
        ft_isascii.c\
        ft_isprint.c\
        ft_strlen.c\
        ft_memset.c\
        ft_bzero.c\
        ft_memcpy.c\
        ft_memmove.c\
        ft_strlcpy.c\
        ft_strlcat.c\
        ft_toupper.c\
        ft_tolower.c\
        ft_strchr.c\
		ft_strrchr.c\
        ft_strncmp.c\
        ft_memchr.c\
        ft_memcmp.c\
        ft_strnstr.c\
        ft_atoi.c\
		ft_calloc.c\
        ft_strdup.c\
		ft_substr.c\
		ft_strjoin.c\
		ft_strtrim.c\
		ft_split.c\
		ft_itoa.c\
		ft_strmapi.c\
		ft_striteri.c\
		ft_putchar_fd.c\
		ft_putstr_fd.c\
		ft_putendl_fd.c\
		ft_putnbr_fd.c\
		ft_countdigit.c \
		ft_decimal.c \
		ft_hex.c \
		ft_pointeurhex.c \
		ft_printchar.c \
		ft_printf.c \
		ft_putnbr_u.c \
		ft_putstr.c \
		ft_selector.c \
		ft_string.c \
		ft_uint.c\
		ft_strjoin_frees1.c

BONUS = ft_lstnew_bonus.c\
		ft_lstadd_front_bonus.c\
		ft_lstsize_bonus.c\
		ft_lstlast_bonus.c\
		ft_lstadd_back_bonus.c\
		ft_lstdelone_bonus.c\
		ft_lstclear_bonus.c\
		ft_lstiter_bonus.c\
		ft_lstmap_bonus.c

        
OBJ = $(SRC:.c=.o)

OBJ_BONUS = $(BONUS:.c=.o)

INC = -I$(INCDIR)

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

bonus: $(BONUS) $(OBJ_BONUS)
	ar rc $(NAME) $(OBJ_BONUS)


$(OBJ): %.o: %.c
	$(CC) $(CFLAGS) $(INC) -c $< -o $@

clean:
	rm -f $(OBJ) $(OBJ_BONUS)

fclean: clean
	rm -f $(NAME)

re: fclean all
