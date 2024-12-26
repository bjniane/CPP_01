NAME = HI_THIS_IS_BRAIN

SRC = main.cpp
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