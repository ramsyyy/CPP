NAME = megaphone

SRC_DIR = src

SRC = megaphone.cpp\

vpath %.cpp $(foreach dir, $(SRC_DIR), $(dir):)

CC = c++

FLAGS = -std=c++98 -Wall -Wextra -Werror

OBJ_DIR = obj

OBJS	=	$(addprefix $(OBJ_DIR)/, $(SRC:%.cpp=%.o))\

all:
	
	@echo "\n $(NAME) compiling...\c"
	@make $(NAME)
	@echo "\n\n............SUCCESS.........."


$(NAME) : $(OBJS) 
	@$(CC)  $(FLAGS)  $(SRC_DIR)/* -o $(NAME)


-include $(addprefix $(OBJ_DIR)/, $(SRC:%.cpp=%.d))

$(OBJ_DIR)/%.o : %.cpp
	@echo " compiling $@...\c"
	@mkdir -p $(OBJ_DIR)
	@$(CC)  $(FLAGS) -o $@ -c $< 
	@echo " 		 DONE"

clean:
	@echo "----deleting binary file $(OBJ)----\n"
	@rm ./$(OBJ_DIR)/*

fclean: clean
	@echo "----deleting binary file $(NAME)----\n"
	@rm $(NAME)

re : fclean all 
	
.PHONY:	all clean fclean re