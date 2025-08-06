TARGET := FragTrap

GXX := c++
GXXFLAGS := -Wall -Werror -Wextra -Wshadow -std=c++17

SRC := main.cpp \
		ClapTrap.cpp \
		ScavTrap.cpp \
		FragTrap.cpp

OBJDIR := obj
OBJ := $(SRC:%.cpp=$(OBJDIR)/%.o)

all: $(TARGET)

$(TARGET): $(OBJ)
	$(GXX) $(GXXFLAGS) -o $@ $^

# Compile .cpp to obj/*.o
$(OBJDIR)/%.o: %.cpp
	@mkdir -p $(OBJDIR)
	$(GXX) $(GXXFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -f $(TARGET)

re: fclean all

.PHONY: all clean fclean re
