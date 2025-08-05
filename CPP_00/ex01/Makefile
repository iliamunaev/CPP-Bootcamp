TARGET = PhoneBook

CXX := c++
CXXFLAGS := -Wall -Wextra -Werror -std=c++17

SRCS :=	main.cpp \
		utils.cpp \
		PhoneBook.cpp \
		Contact.cpp

OBJDIR := obj

OBJS := $(OBJDIR)/main.o \
		$(OBJDIR)/utils.o \
		$(OBJDIR)/PhoneBook.o \
		$(OBJDIR)/Contact.o

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
