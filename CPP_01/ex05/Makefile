TARGET := Harl

GXX := g++
GXXFLAGS := -Wall -Werror -Wextra -std=c++17

SRC := main.cpp \
		Harl.cpp

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
