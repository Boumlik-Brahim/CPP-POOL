NAME = megaphone

CC = c++

FLAGS =  -Wall -Wextra -Werror -std=c++98

SRC = megaphone.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)
	echo '\033[32m' "$(NAME) compiled succefuly" '\033[0m'

clean:
	rm -rf $(OBJ)
	echo '\033[32m' "$(NAME) removed succefuly" '\033[0m'

fclean: clean
	rm -rf $(NAME)
	echo '\033[32m' "$(NAME) removed succefuly" '\033[0m'

re: fclean all

.PHONY:		all clean fclean re