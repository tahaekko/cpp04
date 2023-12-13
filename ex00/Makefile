CXX=c++
FLAGSCXX= -Wall -Wextra -Werror -std=c++98
HEADERS= Animal.hpp Cat.hpp Dog.hpp WrongAnimal.hpp WrongCat.hpp
SRC= Animal.cpp Cat.cpp Dog.cpp main.cpp WrongCat.cpp WrongAnimal.cpp
OBJ= $(SRC:.cpp=.o)
NAME=Animal

all : $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(FLAGSCXX) $(OBJ) -o $(NAME)

%.o : %.cpp $(HEADERS)
	$(CXX) $(FLAGSCXX) -c $< -o $@

clean :
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re : fclean all

