# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pbourmea <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/02/03 17:19:57 by pbourmea          #+#    #+#              #
#    Updated: 2015/03/22 15:37:39 by pbourmea         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = clang

CFLAGS = -Wall -Werror -Wextra -g
LDFLAGS = -I $(DIR_INC)

NAME = libft.a

DIR_SRC = src
DIR_INC = inc
DIR_OBJ = obj

SRC = $(addprefix $(DIR_SRC)/,$(SRC_F))
INC = $(addprefix $(DIR_INC)/,$(INC_F))
OBJ = $(subst .c,.o,$(subst $(DIR_SRC),$(DIR_OBJ),$(SRC)))

SRC_F += ft_atoi.c
SRC_F += ft_bzero.c
SRC_F += ft_isalnum.c
SRC_F += ft_isalpha.c
SRC_F += ft_isascii.c
SRC_F += ft_isdigit.c
SRC_F += ft_isprint.c
SRC_F += ft_itoa.c
SRC_F += ft_memalloc.c
SRC_F += ft_memccpy.c
SRC_F += ft_memchr.c
SRC_F += ft_memcmp.c
SRC_F += ft_memcpy.c
SRC_F += ft_memdel.c
SRC_F += ft_memmove.c
SRC_F += ft_memset.c
SRC_F += ft_putchar.c
SRC_F += ft_putchar_fd.c
SRC_F += ft_putendl.c
SRC_F += ft_putendl_fd.c
SRC_F += ft_putnbr.c
SRC_F += ft_putnbr_fd.c
SRC_F += ft_putstr.c
SRC_F += ft_putstr_fd.c
SRC_F += ft_strcat.c
SRC_F += ft_strchr.c
SRC_F += ft_strclr.c
SRC_F += ft_strcmp.c
SRC_F += ft_strcpy.c
SRC_F += ft_strdel.c
SRC_F += ft_strdup.c
SRC_F += ft_strequ.c
SRC_F += ft_striter.c
SRC_F += ft_striteri.c
SRC_F += ft_strjoin.c
SRC_F += ft_strlcat.c
SRC_F += ft_strlen.c
SRC_F += ft_strmap.c
SRC_F += ft_strmapi.c
SRC_F += ft_strncat.c
SRC_F += ft_strncmp.c
SRC_F += ft_strncpy.c
SRC_F += ft_strnequ.c
SRC_F += ft_strnew.c
SRC_F += ft_strnstr.c
SRC_F += ft_strrchr.c
SRC_F += ft_strsplit.c
SRC_F += ft_strstr.c
SRC_F += ft_strsub.c
SRC_F += ft_tolower.c
SRC_F += ft_toupper.c
SRC_F += ft_strtrim.c
SRC_F += ft_lstnew.c
SRC_F += ft_lstmap.c
SRC_F += ft_lstiter.c
SRC_F += ft_lstdelone.c
SRC_F += ft_lstdel.c
SRC_F += ft_lstadd_end.c
SRC_F += ft_lstadd.c
SRC_F += get_next_line.c
SRC_F += ft_strndup.c
SRC_F += ft_size_bin.c
SRC_F += ft_strisdigit.c

INC_F += libft.h
INC_F += get_next_line.h

all: 		$(NAME)

$(NAME): 	$(OBJ)
			@ar rcs $@ $(OBJ)
			@echo "compile done !"

$(DIR_OBJ)/%.o: $(DIR_SRC)/%.c $(INC) $(DIR_OBJ)
			@$(CC) -o $@ -c $< $(CFLAGS) $(LDFLAGS)

clean:
			@rm -f $(OBJ)
			@echo "clean done !"

fclean:		clean
			@rm -f $(NAME)
			@echo "fclean done !"

re: 		fclean all

debug :		fclean $(SRC)
			@$(CC) $(CFLAG) -g -c $(SRC)
			@ar rc $(NAME) $(OBJ)
			@ranlib $(NAME)
			@echo "compile DEBUG done !"

.PHONY: 	all clean fclean re

$(DIR_OBJ):
	mkdir $(DIR_OBJ)

test:
	echo $(OBJ)
