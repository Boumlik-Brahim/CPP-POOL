# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/18 18:55:15 by bbrahim           #+#    #+#              #
#    Updated: 2022/09/18 18:57:35 by bbrahim          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsp

CXX = c++

FLAGS =  -Wall -Wextra -Werror -std=c++98

SRC = Fixed.cpp main.cpp Point.cpp bsp.cpp

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