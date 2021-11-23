# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nbonafe- <nbonafe-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/18 18:59:51 by nbonafe-          #+#    #+#              #
#    Updated: 2021/11/23 17:36:04 by nbonafe-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc
CFLAGS = -Wall -Werror -Wextra
RM = rm -f

#.c files
SRC	=	ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_striter.c ft_striteri.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putendl_fd.c ft_putchar_fd.c ft_putstr_fd.c ft_putnbr_fd.c ft_strchr.c ft_strlcpy.c ft_strmapi.c ft_strdup.c ft_split.c ft_calloc.c ft_itoa.c ft_strlen.c ft_strncmp.c ft_substr.c ft_strtrim.c ft_strnstr.c ft_strrchr.c ft_strjoin.c ft_tolower.c ft_toupper.c ft_strlcat.c ft_strncat.c

# Bonus = 

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