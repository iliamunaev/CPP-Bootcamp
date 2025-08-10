NAME := Animal

CXX := c++
CXXFLAGS := -Wall -Werror -Wextra -Wshadow -std=c++17

SRC := main.cpp \
		Animal.cpp \
		Cat.cpp \
		Dog.cpp \
		WrongAnimal.cpp \
		WrongCat.cpp

OBJDIR := obj

OBJ := $(OBJDIR)/main.o \
		$(OBJDIR)/Animal.o \
		$(OBJDIR)/Cat.o \
		$(OBJDIR)/Dog.o \
		$(OBJDIR)/WrongAnimal.o \
		$(OBJDIR)/WrongCat.o

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Compile .cpp to obj/*.o
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

$(OBJDIR)/WrongAnimal.o: WrongAnimal.cpp
	@mkdir -p $(OBJDIR)
	$(CXX) $(CXXFLAGS) -c WrongAnimal.cpp -o $(OBJDIR)/WrongAnimal.o

$(OBJDIR)/WrongCat.o: WrongCat.cpp
	@mkdir -p $(OBJDIR)
	$(CXX) $(CXXFLAGS) -c WrongCat.cpp -o $(OBJDIR)/WrongCat.o


clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

run: $(NAME)
	./$(NAME)

.PHONY: all clean fclean re run
