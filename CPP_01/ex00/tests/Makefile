
TARGET := test

GCC := g++
GCCFLAGS := -Wall -Werror -Wextra -std=c++17

SRC := randomChumpTest.cpp

OBJDIR := obj
OBJ := $(SRC:%.cpp=$(OBJDIR)/%.o)

all: $(TARGET)
$(TARGET): $(OBJ)
	$(GCC) $(GCCFLAGS) -o $(TARGET) $(OBJ)

$(OBJDIR)/%.o: %.cpp
	mkdir -p $(OBJDIR)
	$(GCC) $(GCCFLAGS) -c $< -o $@

%.o: %.cpp
	$(GCC) $(GCCFLAGS) -o $@ $^

clean:
	rm -rf $(OBJDIR) $(TARGET)

fclean: clean
	rm -f $(TARGET)

re: fclean all

.PHONY: all clean fclean re
