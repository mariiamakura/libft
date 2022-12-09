# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mparasku <mparasku@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/09 13:35:38 by mparasku          #+#    #+#              #
#    Updated: 2022/12/09 17:40:35 by mparasku         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

LIST =	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c\
		ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c\
		ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c\
		ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c\
		ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c\
		ft_strtrim.c ft_split.c


NAME = libft.a

OBJS_DIR = basic_functions/
OBJS = $(LIST:.c=.o)
OBJECTS_PREFIXED = $(addprefix $(OBJS_DIR), $(OBJS))

FLAGS = -Wall -Wextra -Werror

$(OBJS_DIR)%.o : %.c libft.h
	mkdir -p $(OBJS_DIR)
	gcc $(FLAGS) -c $< -o $@

$(NAME): $(OBJECTS_PREFIXED)
	ar rcs $(NAME) $?
	@echo "Libft DONE!"

all: $(NAME)

clean:
	rm -rf $(OBJS_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all
