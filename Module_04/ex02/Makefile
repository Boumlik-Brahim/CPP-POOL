# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/25 15:29:15 by bbrahim           #+#    #+#              #
#    Updated: 2022/09/27 14:54:51 by bbrahim          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = abstract

CXX = c++

FLAGS =  -Wall -Wextra -Werror -std=c++98

SRC = Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp main.cpp

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