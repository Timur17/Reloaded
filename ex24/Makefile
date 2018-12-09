# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wtorwold <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/01 15:11:11 by wtorwold          #+#    #+#              #
#    Updated: 2018/12/01 21:31:41 by wtorwold         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

OUT = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

INCLUDES = includes/

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -c ./srcs/ft_*.c -I $(INCLUDES)
	ar rc $(NAME) $(OUT)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OUT)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
