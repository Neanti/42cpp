NAME = Serialization
OPTION = -c
FLAG = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp A.cpp B.cpp C.cpp Base.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@clang++ $(FLAG) $(OBJ) -o $(NAME)
clean:
	@rm -f $(OBJ)
fclean: clean
	@rm -f $(NAME)
$(OBJ) :
	@clang++ $(FLAG) $(OPTION) $(SRC)
re: fclean all

.PHONY: all clean fclean re $(NAME)