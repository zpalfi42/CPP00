# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zpalfi <zpalfi@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/04 11:04:21 by zpalfi            #+#    #+#              #
#    Updated: 2022/10/10 12:40:44 by zpalfi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	tests

SRC_DIR		=	.
OBJ_DIR		=	obj/

INCS_DIR	=	.
MAIN_INC	=	-I$(INCS_DIR)
INCS		=	$(shell find $(INCS_DIR) -type f -name "*.hpp")

SRC			=	tests.cpp \
				Account.cpp \

				
OBJ			=	$(SRC:.cpp=.o)

CC				=	clang++
CFLAGS			=	-Wall -Wextra -Werror -std=c++98

%.o:	%.cpp
		$(CC) ${CFLAGS} $(MAIN_INC) -o $@ -c $<

$(NAME)		:	$(OBJ) $(INCS)
		$(CC) $(CFLAGS) $(OBJ) $(MAIN_INC) -o $(NAME)
					
all			:	$(NAME)

clean		:
		@rm -rf $(OBJ)

fclean		:	clean
		@rm -rf $(NAME)

re			:	fclean	all

.PHONY		:	all clean fclean re