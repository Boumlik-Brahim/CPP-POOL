# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/22 10:55:45 by bbrahim           #+#    #+#              #
#    Updated: 2022/09/22 16:51:39 by bbrahim          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = serena

CXX = c++

FLAGS =  -Wall -Wextra -Werror -std=c++98

SRC = ClapTrap.cpp ScavTrap.cpp main.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY:		all clean fclean re