# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zpalfi <zpalfi@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/04 11:04:21 by zpalfi            #+#    #+#              #
#    Updated: 2022/10/04 13:11:08 by zpalfi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	phonebook

SRC_DIR		=	./src/
OBJ_DIR		=	obj/

SRC			=	main.cpp

OBJ			=	$(addprefix $(OBJ_DIR), $(SRC:.cpp=.o))

CC				=	clang++
CFLAGS			=	-Wall -Wextra -Werror

$(OBJ_DIR)%.o:	$(SRC_DIR)%.cpp
		@mkdir -p $(OBJ_DIR)
		@$(CC) ${CFLAGS} -o $@ -c $<

$(NAME)		:	$(OBJ)
		@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
					
all			:	$(NAME)

clean		:
		@rm -rf $(OBJ_DIR)

fclean		:	clean
		@rm -rf $(NAME)

re			:	fclean	all

.PHONY		:	all clean fclean re