NAME = Harl 

CC = c++

FLAGS =  -Wall -Wextra -Werror -std=c++98

SRC =  Harl.cpp main.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY:		all clean fclean re