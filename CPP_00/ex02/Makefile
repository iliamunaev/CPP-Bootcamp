NAME = run_test

CXX := c++
CXXFLAGS := -Wall -Wextra -Werror -std=c++17

SRCS :=	Account.cpp \
		tests.cpp

OBJDIR := obj

OBJS := $(OBJDIR)/Account.o \
		$(OBJDIR)/tests.o

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

$(OBJDIR)/%.o: %.cpp | $(OBJDIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(OBJDIR):
	mkdir -p $(OBJDIR)


clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
