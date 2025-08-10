NAME := FragTrap

CXX := c++
CXXFLAGS := -Wall -Werror -Wextra -Wshadow -std=c++17

OBJDIR := obj

SRC := main.cpp \
		ClapTrap.cpp \
		ScavTrap.cpp \
		FragTrap.cpp

OBJ := $(OBJDIR)/main.o $(OBJDIR)/ClapTrap.o $(OBJDIR)/ScavTrap.o $(OBJDIR)/FragTrap.o

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

$(OBJDIR)/main.o: main.cpp
	@mkdir -p $(OBJDIR)
	$(CXX) $(CXXFLAGS) -c main.cpp -o $(OBJDIR)/main.o

$(OBJDIR)/ClapTrap.o: ClapTrap.cpp
	@mkdir -p $(OBJDIR)
	$(CXX) $(CXXFLAGS) -c ClapTrap.cpp -o $(OBJDIR)/ClapTrap.o

$(OBJDIR)/ScavTrap.o: ScavTrap.cpp
	@mkdir -p $(OBJDIR)
	$(CXX) $(CXXFLAGS) -c ScavTrap.cpp -o $(OBJDIR)/ScavTrap.o

$(OBJDIR)/FragTrap.o: FragTrap.cpp
	@mkdir -p $(OBJDIR)
	$(CXX) $(CXXFLAGS) -c FragTrap.cpp -o $(OBJDIR)/FragTrap.o

clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

run: $(NAME)
	./$(NAME)

.PHONY: all clean fclean re run
