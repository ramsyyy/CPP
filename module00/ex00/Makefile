NAME = megaphone

SRC = megaphone.cpp\

CC = c++

FLAGS = -std=c++98 -Wall -Wextra -Werror

OBJ_DIR = obj

OBJS	=	${SRC:%.cpp=%.o}\

all:
	@echo "\n $(NAME) settings \n" $@
	@mkdir -p $(OBJ_DIR) 
	@make $(NAME) 


$(NAME) : $(OBJS) 
	@echo "\n $(NAME) compiling \n\n"
	@$(CC) $(FLAGS)  ${SRC:%.cpp=%.o} -o $(NAME) 
	@mv *.o ./$(OBJ_DIR)


%.cpp%.o:
	@echo "\n compiling .o settings \n"$@
	@$(CC) $(FLAGS) $< -o $@
	
	


clean:
	@echo "----deleting binary file $(OBJ)----\n"
	@rm ./$(OBJ_DIR)/*

fclean: clean
	@echo "----deleting binary file $(NAME)----\n"
	@rm $(NAME)

re : fclean all 
	
.PHONY:	all clean fclean re