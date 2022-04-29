NAME=Type_Info

CC=clang++

# FLAG=-Wall -Werror -Wextra -std=c++98

SRC= Base.cpp A.cpp B.cpp C.cpp main.cpp

$(NAME):$(SRC)
	$(CC) $(FLAG) $(SRC) -o $(NAME)

all: $(NAME)

fclean:
	rm -rf $(NAME)

re:fclean all