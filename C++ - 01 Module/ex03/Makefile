
CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = weapon

SRCS = HumanA.cpp  HumanB.cpp  main.cpp  Weapon.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

#___for the .SECONDARY rule, it is used to prevent the deletion of the intermediate files.
.SECONDARY: $(OBJS)
