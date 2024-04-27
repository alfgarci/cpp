SRCS =	megaphone.cpp

OBJS =	$(SRCS:.cpp=.o)

CXX =	g++
CXXFLAGS =	-Wall -Wextra -Werror -std=c++98

NAME =	megaphone

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c -o $@ $< -I $(INC)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)
	
re: fclean all
