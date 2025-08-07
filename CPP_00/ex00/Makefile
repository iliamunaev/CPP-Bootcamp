NAME = megaphone

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++17

SRCS = megaphone.cpp
OBJS = megaphone.o

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $(SRCS) -o $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
