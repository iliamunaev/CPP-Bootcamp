NAME := Bureaucrat

CXX := c++
CXXFLAGS := -Wall -Werror -Wextra -Wshadow -std=c++17

SRC := main.cpp \
		Bureaucrat.cpp

OBJDIR := obj
OBJ := $(OBJDIR)/main.o \
	$(OBJDIR)/Bureaucrat.o

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

$(OBJDIR)/main.o: main.cpp
	@mkdir -p $(OBJDIR)
	$(CXX) $(CXXFLAGS) -c main.cpp -o $(OBJDIR)/main.o

$(OBJDIR)/Bureaucrat.o: Bureaucrat.cpp
	@mkdir -p $(OBJDIR)
	$(CXX) $(CXXFLAGS) -c Bureaucrat.cpp -o $(OBJDIR)/Bureaucrat.o

clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

run: $(NAME)
	./$(NAME)

.PHONY: all clean fclean re run
