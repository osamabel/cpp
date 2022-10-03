NAME =  FragTrap
CPPFLAG = -Wall -Wextra -Werror -std=c++98 -g
SRC = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp
OBJ = $(SRC:.cpp=.o)


all : $(NAME)

$(NAME): $(OBJ)
	@c++ $(CPPFLAG) -o $(NAME) $(OBJ)

%.o:%.cpp FragTrap.hpp ScavTrap.hpp ClapTrap.hpp
	@c++ $(CPPFLAG) -c $< -o $@

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all