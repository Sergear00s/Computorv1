NAME=computor
SRC= main.cpp
OBJ= $(SRC:.cpp=.o)
CXX=clang++
CFLAGS= #-Wall -Wextra -Werror 




all: $(NAME)
	

$(NAME): $(OBJ)
		$(CXX) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CXX) $(CFLAGS) -c $< -o $@	

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME) 







