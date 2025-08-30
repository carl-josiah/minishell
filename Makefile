NAME		:= minishell

EXEC_DIR	:= srcs/execution/
LEXER_DIR	:= srcs/lexing/
MAIN_DIR	:= srcs/main/
PAR_DIR		:= srcs/parsing/
OBJS_DIR	:= objs/
LIBFT_DIR	:= libft-custom

MAIN_SRCS	:= $(addprefix $(MAIN_DIR), 	minishell.c \
											)
LEXER_SRCS	:= $(addprefix $(LEXER_DIR),	lexer.c \
											)

SRCS		:= $(MAIN_SRCS) $(LEXER_SRCS)

OBJS		:= $(SRCS:%.c=$(OBJS_DIR)%.o)

FLAGS 		:= -Wall -Wextra -Werror

RDL_FLAG 	:= -lreadline

RED			:= '\033[0;31m'
WHITE		:= '\033[0;37m'
GREEN		:= '\033[0;32m'

all: $(LIBFT_DIR)/libft.a $(NAME)

$(LIBFT_DIR)/libft.a:
	@make -s -C $(LIBFT_DIR)

$(NAME): $(OBJS) $(LIBFT_DIR)/libft.a
	@cc $^ -o $@ -L$(LIBFT_DIR) -lft $(RDL_FLAG) 
	@echo $(GREEN)"created ./$(NAME)"$(WHITE)

$(OBJS_DIR)%.o: %.c
	@mkdir -p $(dir $@)
	@cc $(FLAGS) -c $< -o $@

clean:
	@rm -r -f $(OBJS_DIR)
	@make -s -C $(LIBFT_DIR) clean
	@echo $(RED)"removing all minishell objs..."$(WHITE)

fclean: clean
	@rm -f $(NAME)
	@make -s -C $(LIBFT_DIR) fclean
	@echo $(RED)"removing minishell executable!"$(WHITE)

re: fclean all

.PHONY: all clean fclean