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

SRC = main.cpp zombie.cpp

OBJECTS = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
		@echo "Compiling successfly!!!\n"
		$(CPP) $(CPPFLAGS) -o $(NAME) $(OBJECTS)

fclean: clean
		$(RM) $(NAME)

clean:
		$(RM) $(OBJECTS)

re: fclean all

.PHONY: all clean fclean re


