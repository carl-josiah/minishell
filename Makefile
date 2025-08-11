NAME = minishell

FLAGS = -Wall -Wextra -Werror -lreadline

SRCS = $(addsuffix .c,	main)

OBJS = $(SRCS:%.c=%.o)

all: $(NAME)

$(NAME)