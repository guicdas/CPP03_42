CXX				= c++
CXXFLAGS		= -Wall -Wextra -Werror -std=c++98
RM				= rm -fr
INC				= -I FragTrap.hpp -I ClapTrap.hpp -I ScavTrap.hpp
NAME			= RepetitiveWork

SOURCES			= main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp

SOURCES_O		= $(SOURCES:.cpp=.o)

all:			$(NAME)

$(NAME):	$(SOURCES)
	@$(CXX) $(CXXFLAGS) $(INC) $(SOURCES) -o $(NAME)

clean:
	@$(RM) $(SOURCES_O)

fclean:			clean
	@$(RM) $(NAME)

re:				fclean $(NAME)

x:
	clear
	@$(RM) $(SOURCES_O)
	@$(RM) $(NAME)
	@$(CXX) $(CXXFLAGS) $(INC) $(SOURCES) -o $(NAME)
	@./$(NAME)

.PHONY:			all clean fclean re x