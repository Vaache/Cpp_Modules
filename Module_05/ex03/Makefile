NAME	= Intern

SRC_DIR = src
SRC 	= $(wildcard $(SRC_DIR)/*.cpp)

OBJ_DIR = obj
OBJ		= $(patsubst $(SRC_DIR)/%.cpp, $(OBJ_DIR)/%.o, $(SRC))


CC			= c++
CFLAGS		= -Wall -Wextra -Werror -std=c++98 $(INCLUDES)
HEADERS 	= $(wildcard incs/*.hpp)
INCLUDES	= -I./incs
MK			= mkdir -p

# test :
# 	@echo $(HEADERS)

all: $(OBJ_DIR) $(NAME)

$(OBJ_DIR) :
	$(MK) $(OBJ_DIR)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp $(HEADERS) Makefile
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ) $(HEADERS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

clean:
	@rm -rf $(OBJ_DIR)
	
fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re