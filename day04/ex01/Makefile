NAME =  brain
# CPPFLAG = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp poly.cpp brain.cpp wrong.cpp
OBJ = $(SRC:.cpp=.o)


all : $(NAME)

$(NAME): $(OBJ)
	@c++ $(CPPFLAG) -o $(NAME) $(OBJ)

%.o:%.cpp poly.hpp brain.hpp wrong.hpp
	@c++ $(CPPFLAG) -c $< -o $@

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all