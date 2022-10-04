# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zpalfi <zpalfi@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/04 11:04:21 by zpalfi            #+#    #+#              #
#    Updated: 2022/10/04 11:38:52 by zpalfi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME		=	megaphone

SRCS		=	megaphone.cpp

CC			=	clang++
CFLAGS		=	-Wall -Wextra -Werror

RM			=	rm -f

OBJS		=	$(SRCS:.cpp=.o)

%.o: %.cpp
	@$(CC) $(FLAGS) -c $< -o $@

all : $(NAME)

$(NAME)	: $(OBJS)
	@$(CC) $(CFLAGS) $^ -o $(NAME)
	@echo '$(NAME) compiled!'

fclean		: clean
	@$(RM) $(NAME)

clean		:
	@$(RM) $(OBJS)

re			:	fclean all

.PHONY		:	all clean fclean re