NAME := Fixed

CXX := c++
CXXFLAGS := -Wall -Werror -Wextra -Wshadow -std=c++17

OBJDIR := obj

SRC := main.cpp \
		Fixed.cpp

OBJ := $(OBJDIR)/main.o $(OBJDIR)/Fixed.o

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

$(OBJDIR)/main.o: main.cpp
	@mkdir -p $(OBJDIR)
	$(CXX) $(CXXFLAGS) -c main.cpp -o $(OBJDIR)/main.o

$(OBJDIR)/Fixed.o: Fixed.cpp
	@mkdir -p $(OBJDIR)
	$(CXX) $(CXXFLAGS) -c Fixed.cpp -o $(OBJDIR)/Fixed.o

clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

run: $(NAME)
	./$(NAME)

.PHONY: all clean fclean re run
