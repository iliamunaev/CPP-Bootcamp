NAME := Bureaucrat

CXX := c++
CXXFLAGS := -Wall -Werror -Wextra -Wshadow -std=c++17

SRC := main.cpp \
		Bureaucrat.cpp

OBJDIR := obj
OBJ := $(SRC:%.cpp=$(OBJDIR)/%.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Compile .cpp to obj/*.o
$(OBJDIR)/%.o: %.cpp
	@mkdir -p $(OBJDIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

run: $(NAME)
	./$(NAME)

.PHONY: all clean fclean re run
