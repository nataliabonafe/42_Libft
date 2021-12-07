#Name of the project
NAME	=	libft.a

#Compiler + Flags 
# -I (include) Specifies a directory dir to search for included makefiles.
CC	=	gcc
CFLAGS	=	-Wall -Wextra -Werror
RM	=	rm -f

HEADER = libft.h

#.c files
SRC	= $(wildcard *.c)

#Object files
OBJ	=	$(SRC:.c=.o)

#Compile with the flags
.o.c:
	@$(CC) $(CFLAGS) -I $(HEADER) -o $@ -c $<

all:	$(NAME)

$(NAME):	$(OBJ)
			ar rcs $(NAME) $(OBJ)

clean:
			$(RM) $(OBJ)

fclean:	clean
			$(RM) $(NAME)

re:	fclean $(NAME)

# Is just a name for a recipe to be executed when you make an explicit request. 
# Avoid a conflict with a file of the same name, and to improve performance.
.PHONY: all clean fclean re
