# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ccastro <ccastro@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/14 11:09:47 by ccastro           #+#    #+#              #
#    Updated: 2025/08/19 12:37:30 by ccastro          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= minishell

SRCS	= $(addsuffix .c, minishell)

OBJS	= $(SRCS:%.c=%.o)

RDL		= -lreadline

FLAGS	= -g3 -O3

all: $(NAME)

$(NAME): $(OBJS)
	cc $(FLAGS) $(RDL) $^ -o $@

%.o: %.c
	cc $(FLAGS) -c $<

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all