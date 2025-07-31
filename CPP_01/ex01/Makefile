TARGET := Zombie

GCC := g++
GCCFLAGS := -Wall -Werror -Wextra -std=c++17

SRC := main.cpp \
	Zombie.cpp

OBJDIR := obj
OBJ := $(SRC:%.cpp=$(OBJDIR)/%.o)

all: $(TARGET)

$(TARGET): $(OBJ)
	$(GCC) $(GCCFLAGS) -o $@ $^

# Compile .cpp to obj/*.o
$(OBJDIR)/%.o: %.cpp
	@mkdir -p $(OBJDIR)
	$(GCC) $(GCCFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -f $(TARGET)

re: fclean all

.PHONY: all clean fclean re
