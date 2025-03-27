NAME		=	sed
CC			=	c++
CFLAGS		=	-Wall -Wextra -Werror -std=c++98
SRC_DIR		=	./
OBJ_DIR		=	objects

SRCS			=	$(SRC_DIR)/main.cpp

OBJS		=	$(patsubst $(SRC_DIR)/%.cpp, $(OBJ_DIR)/%.o, $(SRCS))

all:			$(NAME)

$(OBJ_DIR)/%.o:	$(SRC_DIR)/%.cpp | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(NAME):		$(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJ_DIR)

fclean:			clean
	rm -f $(NAME)

re:				fclean all

.PHONY:			all clean fclean re