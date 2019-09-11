# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: slupe <slupe@student.21-school.ru>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/11 16:31:44 by slupe             #+#    #+#              #
#    Updated: 2019/09/11 22:24:41 by slupe            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FLAGS = -Wall -Wextra -Werror

INCLUDES = /libft.h

FILES = ft_*.c

OBJ = ft_*.o

all: $(NAME)

$(NAME): $(FILES)
	gcc $(FLAGS) -I $(INCLUDES) -c $(FILES)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)
clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
