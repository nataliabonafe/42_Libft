# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nbonafe- <nbonafe-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/18 18:59:51 by nbonafe-          #+#    #+#              #
#    Updated: 2021/11/18 18:59:54 by nbonafe-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc
CFLAGS = -Wall -Werror -Wextra
RM = rm -f

SRC = ft_atoi.c 

# B = 

OBJ = $(SRC:.c=.o)

# BOBJ = $(B:.c=.o)

all:	$(NAME)

# bonus:	$(BOBJ)
# 			ar rcs $(NAME) $(OBJ)

$(NAME):	$(OBJ)
			ar rcs $(NAME) $(OBJ)
clean:
			$(RM) $(OBJ)

fclean: clean
			$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re