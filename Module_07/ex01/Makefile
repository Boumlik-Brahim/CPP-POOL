# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/12 18:19:39 by bbrahim           #+#    #+#              #
#    Updated: 2022/10/16 11:43:20 by bbrahim          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = iter

CXX = c++

FLAGS =  -Wall -Wextra -Werror -std=c++98

HEADER = iter.hpp

SRC = main.cpp

OBJ = $(SRC:.cpp=.o)

%.o: %.cpp $(HEADER)
	$(CXX) $(FLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY:		all clean fclean re