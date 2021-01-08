# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: augay <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/06 08:33:54 by augay             #+#    #+#              #
#    Updated: 2021/01/06 08:33:58 by augay            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone
OPTION = -c
FLAG = -Wall -Wextra -Werror -std=c++98
SRC = megaphone.cpp
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
