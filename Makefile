NAME		:= minishell

SRCS_DIR	:= srcs/

OBJS_DIR	:= objs/

SRCS		:= $(addprefix $(SRCS_DIR), $(addsuffix .c,	minishell \
														))

OBJS		:= $(SRCS:%.c=$(OBJS_DIR)%.o)

FLAGS 		:= -Wall -Wextra -Werror

RDL_FLAG 	:= -lreadline

RED			:= '\033[0;31m'
WHITE		:= '\033[0;37m'
GREEN		:= '\033[0;32m'

all: $(NAME)

$(NAME): $(OBJS)
	@cc $^ -o $@ $(RDL_FLAG)
	@echo $(GREEN)"created ./minishell"$(WHITE)

$(OBJS_DIR)%.o: %.c
	@mkdir -p $(dir $@)
	@cc $(FLAGS) -c $< -o $@

clean:
	@rm -r -f $(OBJS_DIR)
	@echo $(RED)"removing all objs..."$(WHITE)

fclean: clean
	@rm -f $(NAME)
	@echo $(RED)"removing executable..."$(WHITE)

re: fclean all

.PHONY: all clean fclean