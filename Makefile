# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pakucera <pakucera@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/11 13:39:11 by pakucera          #+#    #+#              #
#    Updated: 2021/11/11 13:39:20 by pakucera         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = $(shell find . -name "*.c")

OBJ = $(SRC:.c=.o)

CFLAGS = -Wall -Wextra -Werror

COMPILE = gcc $(CFLAGS) -c

LIB = ar rc $(NAME)

RANLIB = ranlib $(NAME)

REMOVE = rm -f

all = $(NAME)

$(NAME):
		@$(COMPILE) $(SRC)
		@$(LIB) $(OBJ)
		@$(RANLIB)

clean:
		@$(REMOVE) $(OBJ)

fclean:	clean
		@$(REMOVE) $(NAME)

re:		fclean $(NAME)

.PHONY: all clean fclean re