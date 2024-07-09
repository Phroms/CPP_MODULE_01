# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agrimald <agrimald@student.42barcelona.co  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/27 17:55:12 by agrimald          #+#    #+#              #
#    Updated: 2024/06/27 17:56:51 by agrimald         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Zombieee🧟
CPP = g++
CPPFLAGS = -Wall -Werror -Wextra -g -std=c++98 #fsanitize=address -
RM = rm -rf
CYAN = \033[96m
RED = \033[91m
END_COLOR = \033[0m

SRC = main.cpp zombie.cpp

OBJECTS = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
		@echo "$(CYAN)\nCompiling successfly!!!\n$(END_COLOR)"
		$(CPP) $(CPPFLAGS) -o $(NAME) $(OBJECTS)

fclean: clean
		$(RM) $(NAME)

clean:
		@echo "$(RED)\nRemoving!!!\n$(END_COLOR)"
		$(RM) $(OBJECTS)

re: fclean all

.PHONY: all clean fclean re


