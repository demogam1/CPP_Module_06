NAME=convert

FLAG=-std=c++98

CC=clang++

SRC= main.cpp Conversion.cpp

$(NAME):$(SRC)
	$(CC) $(FLAG) $(SRC) -o $(NAME) 

all:$(NAME)

fclean:
	rm -rf $(NAME)

re:fclean all