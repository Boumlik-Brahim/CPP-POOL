# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/06 09:49:03 by bbrahim           #+#    #+#              #
#    Updated: 2022/10/10 17:34:49 by bbrahim          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = realtype

CXX = c++

FLAGS =  -Wall -Wextra -Werror -std=c++98

SRC = Base.cpp A.cpp B.cpp C.cpp main.cpp

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