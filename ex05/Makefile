# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agrimald <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/17 16:55:02 by agrimald          #+#    #+#              #
#    Updated: 2024/07/17 16:55:03 by agrimald         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = Harl
CPP = g++
CFLAGS = -Wall -Werror -Wextra -g -std=c++98 -fsanitize=address
RM = rm -rf
CYAN = \033[96m
RED = \033[91m
END_COLOR = \033[0m

SRC = main.cpp Harl.cpp

OBJECTS = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
		 @echo "$(CYAN)\nCompiling!!!\n$(END_COLOR)"
		 $(CPP) $(CFLAGS) -o $(NAME) $(OBJECTS)

fclean: clean
		$(RM) $(NAME)

clean:
		@echo "$(RED)\nRemoving!!!\n$(END_COLOR)"
		$(RM) $(OBJECTS)

re: fclean all

.PHONY: all clean fclean re