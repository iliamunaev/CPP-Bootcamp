NAME := Brain

CXX := c++
CXXFLAGS := -Wall -Werror -Wextra -Wshadow -std=c++17

SRC := main.cpp \
		Animal.cpp \
		Cat.cpp \
		Dog.cpp \
		Brain.cpp

OBJDIR := obj

OBJ := $(OBJDIR)/main.o \
		$(OBJDIR)/Animal.o \
		$(OBJDIR)/Cat.o \
		$(OBJDIR)/Dog.o \
		$(OBJDIR)/Brain.o

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

$(OBJDIR)/main.o: main.cpp
	@mkdir -p $(OBJDIR)
	$(CXX) $(CXXFLAGS) -c main.cpp -o $(OBJDIR)/main.o

$(OBJDIR)/Animal.o: Animal.cpp
	@mkdir -p $(OBJDIR)
	$(CXX) $(CXXFLAGS) -c Animal.cpp -o $(OBJDIR)/Animal.o

$(OBJDIR)/Cat.o: Cat.cpp
	@mkdir -p $(OBJDIR)
	$(CXX) $(CXXFLAGS) -c Cat.cpp -o $(OBJDIR)/Cat.o

$(OBJDIR)/Dog.o: Dog.cpp
	@mkdir -p $(OBJDIR)
	$(CXX) $(CXXFLAGS) -c Dog.cpp -o $(OBJDIR)/Dog.o

$(OBJDIR)/Brain.o: Brain.cpp
	@mkdir -p $(OBJDIR)
	$(CXX) $(CXXFLAGS) -c Brain.cpp -o $(OBJDIR)/Brain.o

clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

run: $(NAME)
	./$(NAME)

.PHONY: all clean fclean re run
