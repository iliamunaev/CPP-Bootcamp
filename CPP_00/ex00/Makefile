TARGET = megaphone

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++17

SRCS = megaphone.cpp
OBJS = megaphone.o

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $(SRCS) -o $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(TARGET)

re: fclean all

.PHONY: all clean fclean re
