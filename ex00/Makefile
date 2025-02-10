NAME = phonebook
CC = c++
RM = rm -rf
CFLAGS = -std=c++98 -Wall -Wextra -Werror

INCS =	Contact.hpp \
		PhoneBook.hpp

SRCS =	main.cpp \
		Contact.cpp \
		PhoneBook.cpp

OBJS_DIR = ./bin/
SRCS_DIR = ./src/
INCS_DIR = ./include/

OBJS = $(SRCS:.cpp=.o)

SRC = $(addprefix $(SRCS_DIR), $(SRCS))
INC = $(addprefix $(INCS_DIR), $(INCS))
OBJ = $(addprefix $(OBJS_DIR), $(OBJS))

all: $(NAME)

$(NAME): $(OBJS_DIR) $(OBJ) $(INC)
	$(CC) -o $(NAME) $(OBJ) $(CFLAGS)

$(OBJS_DIR)%.o: $(SRCS_DIR)%.cpp $(INC)
	$(CC) -c -I$(INCS_DIR) -o $@ $< $(CFLAGS)

$(OBJS_DIR):
	mkdir -p $(OBJS_DIR)

clean:
	$(RM) $(OBJS_DIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
