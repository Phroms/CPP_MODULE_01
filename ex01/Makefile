# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agrimald <agrimald@student.42barcelona.co  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/28 16:52:06 by agrimald          #+#    #+#              #
#    Updated: 2024/06/28 16:52:07 by agrimald         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Zombieeee🧟
CPP = g++
CPPFLAGS = -Wall -Werror -Wextra -g -std=c++98 -fsanitize=address
RM = rm -rf

SRC = main.cpp Zombie.cpp

OBJECTS = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME):$(OBJECTS)
		@echo "Compiling successfly!!!\n"
		$(CPP) $(CPPFLAGS) -o  $(NAME) $(OBJECTS)

fclean: clean
		$(RM) $(NAME)

clean:
		$(RM) $(OBJECTS)
	
re: fclean all

.PHONY: all clean fclean re
