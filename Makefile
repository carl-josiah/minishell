# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ccastro <ccastro@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/14 11:09:47 by ccastro           #+#    #+#              #
#    Updated: 2025/08/19 13:30:13 by ccastro          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= minishell

SRCS	= $(addsuffix .c, minishell)

OBJS	= $(SRCS:%.c=%.o)

RDL		= -lreadline

FLAGS	= -g3 -O3

LIBDIR	= libft

LIBFT	= $(LIBDIR)/libft.a

INCS	= -I $(LIBDIR)

all: $(NAME)

$(NAME): $(OBJS) $(LIBFT)
	cc $(FLAGS) $(RDL) $(INCS) $^ $(LIBFT) -o $@

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
