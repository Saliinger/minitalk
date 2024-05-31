# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/20 17:03:59 by saliinger         #+#    #+#              #
#    Updated: 2024/05/01 12:33:23 by anoukan          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = client
NAME_SERVER = server

NAME_BONUS = client_bonus
NAME_SERVER_BONUS = server_bonus

CC = cc
CFLAGS = -Wall -Wextra -Werror -g3 -fsanitize=address
SRC_DIR= ./src
C_DIR= $(SRC_DIR)/client
S_DIR= $(SRC_DIR)/server
FUNC_DIR= $(SRC_DIR)/function

SRC_CLIENT =	$(C_DIR)/client.c\
				$(C_DIR)/ft_handler.c\
				$(C_DIR)/ft_send_char.c\
				$(C_DIR)/ft_send.c

SRC_SERVER =	$(S_DIR)/server.c\
				$(S_DIR)/ft_handler.c\
				$(S_DIR)/print_message.c\
				$(S_DIR)/init_waitlist.c\
				$(S_DIR)/add_client.c\
				$(S_DIR)/find_client.c\
				$(S_DIR)/free_waitlist.c\
				$(S_DIR)/remove_client.c

SRC_FUNCTION=	$(FUNC_DIR)/ft_banner.c\
				$(FUNC_DIR)/ft_error.c

OBJ_CLIENT = $(SRC_CLIENT:.c=.o)
OBJ_SERVER = $(SRC_SERVER:.c=.o)
OBJ_FUNC = $(SRC_FUNCTION:.c=.o)

LIBFT = libft/libft.a
MAKE_LIBFT = make -C libft

.PHONY: all clean fclean re

all: $(NAME) $(NAME_SERVER)

$(NAME): $(OBJ_CLIENT) $(OBJ_FUNC) 
	$(MAKE_LIBFT)
	$(CC) $(CFLAGS) $(OBJ_CLIENT) $(OBJ_FUNC) $(LIBFT) -o $(NAME)

$(NAME_SERVER): $(OBJ_SERVER) $(OBJ_FUNC) 
	$(MAKE_LIBFT)
	$(CC) $(CFLAGS) $(OBJ_SERVER) $(OBJ_FUNC) $(LIBFT) -o $(NAME_SERVER)

bonus: $(NAME_BONUS) $(NAME_SERVER_BONUS)

$(NAME_BONUS): $(OBJ_CLIENT) $(OBJ_FUNC)
	$(MAKE_LIBFT)
	$(CC) $(CFLAGS) $(OBJ_CLIENT) $(OBJ_FUNC) $(LIBFT) -o $(NAME_BONUS)

$(NAME_SERVER_BONUS): $(OBJ_SERVER) $(OBJ_FUNC)
	$(MAKE_LIBFT)
	$(CC) $(CFLAGS) $(OBJ_SERVER) $(OBJ_FUNC) $(LIBFT) -o $(NAME_SERVER_BONUS)

clean:
	rm -f $(OBJ_SERVER) $(OBJ_CLIENT) $(OBJ_FUNC)
	$(MAKE_LIBFT) clean

fclean: clean
	rm -f $(NAME_SERVER) $(NAME) $(NAME_SERVER_BONUS) $(NAME_BONUS)
	$(MAKE_LIBFT) fclean

re: fclean all


