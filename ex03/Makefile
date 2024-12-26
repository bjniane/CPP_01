NAME = Weapon

SRC = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp
OBJ = $(SRC:.cpp=.o)

CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME) : $(OBJ)
	${CPP} ${CPPFLAGS} ${OBJ} -o ${NAME}

clean:
	rm -f $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re