
NAME = Unnecessary_violence
CC = g++
SRC = main.cpp\
	HumanA.cpp\
	HumanB.cpp\
	Weapon.cpp

CFLAGS = -Werror -Wall -Wextra -std=c++98

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re