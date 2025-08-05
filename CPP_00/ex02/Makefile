TARGET = run_test

CXX := c++
CXXFLAGS := -Wall -Wextra -Werror -std=c++17

SRCS :=	Account.cpp \
		tests.cpp

OBJDIR := obj

OBJS := $(OBJDIR)/Account.o \
		$(OBJDIR)/tests.o

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

$(OBJDIR)/%.o: %.cpp | $(OBJDIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(OBJDIR):
	mkdir -p $(OBJDIR)


clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -f $(TARGET)

re: fclean all

.PHONY: all clean fclean re
