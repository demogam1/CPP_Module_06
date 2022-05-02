NAME=serial

CC=clang++

FLAG=-Wall -Werror -Wextra -std=c++98

SRC=main.cpp

$(NAME):$(SRC)
	$(CC) $(FLAG) $(SRC) -o $(NAME)

all: $(NAME)

fclean:
	rm -rf $(NAME)

re:fclean all