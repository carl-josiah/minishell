# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ccastro <ccastro@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/14 11:09:47 by ccastro           #+#    #+#              #
#    Updated: 2025/08/22 20:48:11 by ccastro          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= minishell

SRCS	= $(addsuffix .c, minishell lexer)

OBJS	= $(SRCS:%.c=%.o)

RDL		= -lreadline

FLAGS	= -g3 -O3

LIBDIR	= libft-minishell

LIBFT	= $(LIBDIR)/libft.a

INCS	= -I $(LIBDIR)

all: $(NAME)

$(NAME): $(OBJS) $(LIBFT)
	cc $(FLAGS) $(INCS) $^ $(LIBFT) $(RDL) -o $@

%.o: %.c
	cc $(FLAGS) $(INCS) -c $< -o $@

$(LIBFT):
	$(MAKE) -C $(LIBDIR)

clean:
	rm -f $(OBJS)
	$(MAKE) -C $(LIBDIR) clean

fclean: clean
	rm -f $(NAME)
	$(MAKE) -C $(LIBDIR) fclean

re: fclean all

.PHONY: all clean fclean re
