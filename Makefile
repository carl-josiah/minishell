# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ccastro <ccastro@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/14 11:09:47 by ccastro           #+#    #+#              #
#    Updated: 2025/08/15 09:00:14 by ccastro          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS = -g3 -O3

all: ./main
	cc $(FLAGS) -lreadline main.c -o main

./main: main.o ft_split.o ft_strlen.o ft_strdup.o ft_substr.o
	cc -c main.c ft_split.c ft_strlen.c ft_strdup.c ft_substr.c

clean:
	rm -f main.o ft_split.o ft_strlen.o ft_strdup.o ft_substr.o

fclean: clean
	rm -f ./main

re: fclean all