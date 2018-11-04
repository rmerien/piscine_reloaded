# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmerien <rmerien@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/04 15:55:42 by rmerien           #+#    #+#              #
#    Updated: 2018/11/04 16:38:50 by rmerien          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
CC = gcc
CFLAG = -c -Wall -Werror -Wextra
SRC = ft_display_file.c
OBJ = ft_display_file.o
HDR = -I header.h
RM = rm -f

all: $(NAME)

$(NAME):
	@$(CC) $(CFLAG) $(SRC) $(HDR)
	@$(CC) $(OBJ) -o $(NAME)

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME)

re: fclean all
