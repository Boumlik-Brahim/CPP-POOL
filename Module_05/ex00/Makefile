# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/29 17:05:29 by bbrahim           #+#    #+#              #
#    Updated: 2022/09/29 17:08:50 by bbrahim          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =  bureaucrat

CXX = c++

FLAGS =  -Wall -Wextra -Werror -std=c++98

SRC = Bureaucrat.cpp main.cpp

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