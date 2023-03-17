NAME = btc

SRC_DIR = src

SRC =	main.cpp 		\

vpath %.cpp $(foreach dir, $(SRC_DIR), $(dir):)

INC_DIR =	$(shell find include -type d)

INC =	
		

CC = c++

FLAGS = -std=c++98 -Wall -Wextra -Werror

IFLAGS = $(foreach dir, $(INC_DIR), -I $(dir))

OBJ_DIR = obj

OBJS	=	$(addprefix $(OBJ_DIR)/, $(SRC:%.cpp=%.o)) \
			$(INC)

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
	@$(CC)  $(FLAGS) $(IFLAGS) -o $@ -c $< 
	@echo " 		 DONE"

clean:
	@echo "----deleting binary file $(OBJ)----\n"
	@rm -f ./$(OBJ_DIR)/*
	@rm -rf ./$(OBJ_DIR)
fclean: clean
	@echo "----deleting binary file $(NAME)----\n"
	@rm -f $(NAME)

re : fclean all 
	
.PHONY:	fclean re all clean