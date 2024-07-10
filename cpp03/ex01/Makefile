NAME =	scavtrap

SRCS =	main.cpp \
		ClapTrap.cpp \
		ScavTrap.cpp

OBJS =	$(SRCS:.cpp=.o)

CXX = c++
CXXFLAGS =	-Wall -Wextra -Werror -std=c++98

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS) $(HEADER)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp $(HEADER)
	$(CXX) $(CXXFLAGS) -c -o $@ $<

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)
	
re: fclean all
