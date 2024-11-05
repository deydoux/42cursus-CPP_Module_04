NAME = ex03

SOURCES = \
AMateria.cpp \
Character.cpp \
Cure.cpp \
Ice.cpp \
main.cpp \
MateriaList.cpp \
MateriaSource.cpp \

CXX = c++
CXXFLAGS = -MD -std=c++98 -Wall -Wextra -Werror -g3
RM = rm -rf
MKDIR = mkdir -p

BUILD_DIR = build
OBJECTS = $(addprefix $(BUILD_DIR)/,$(SOURCES:.cpp=.o))
DEPENDENCIES = $(OBJECTS:.o=.d)

all: $(NAME)

-include $(DEPENDENCIES)

$(BUILD_DIR)/%.o: %.cpp
	@$(MKDIR) $(@D)
	$(CXX) $(CXXFLAGS) -o $@ -c	$<

$(NAME): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $^

clean:
	$(RM) $(BUILD_DIR)

fclean:
	$(RM) $(BUILD_DIR) $(NAME)

re: fclean all

.PHONY: all clean fclean re
