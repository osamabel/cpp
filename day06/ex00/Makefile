NAME =  convert
CPPFLAG = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp Caster.cpp
OBJ = $(SRC:.cpp=.o)


all : $(NAME)

$(NAME): $(OBJ)
	@c++ $(CPPFLAG) -o $(NAME) $(OBJ)

%.o:%.cpp Caster.hpp
	@c++ $(CPPFLAG) -c $< -o $@

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all