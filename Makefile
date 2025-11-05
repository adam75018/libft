CC = cc 
CFLAGS = -Wall -Werror -Wextra 
SRC = $(wildcard *.c) 
AR = ar rcs 
OBJ = $(SRC:.c=.o)
NAME = libft.a 

all : $(NAME)
	
$(NAME)	: $(OBJ)
	AR $(NAME) $(OBJ)

%.o : %.c
	$(CC) $(CFLAGS) -c $(SRC)

clean : 
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re
