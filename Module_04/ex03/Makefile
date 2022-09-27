# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/27 15:03:13 by bbrahim           #+#    #+#              #
#    Updated: 2022/09/27 18:42:27 by bbrahim          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Interrecap

CXX = c++

FLAGS =  -Wall -Wextra -Werror -std=c++98

SRC = AMateria.cpp Cure.cpp Ice.cpp Character.cpp MateriaSource.cpp main.cpp

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