NAME = libft.a

AR = ar

ARFLAGS = rcs

CC = cc

CCFLAGS = -Wall -Wextra -Werror

RM = rm -rf

SRC = $(addsuffix .c,	ft_atoi \
						ft_bzero \
						ft_calloc \
						ft_isalnum \
						ft_isalpha \
						ft_isascii \
						ft_isdigit \
						ft_isprint \
						ft_itoa \
						ft_memchr \
						ft_memcmp \
						ft_memcpy \
						ft_memmove \
						ft_memset \
						ft_putchar_fd \
						ft_putendl_fd \
						ft_putnbr_fd \
						ft_putstr_fd \
						ft_split \
						ft_strchr \
						ft_strdup \
						ft_striteri \
						ft_strjoin \
						ft_strlcat \
						ft_strlcpy \
						ft_strlen \
						ft_strmapi \
						ft_strncmp \
						ft_strnstr \
						ft_strrchr \
						ft_strtrim \
						ft_substr \
						ft_tolower \
						ft_toupper \
						ft_isspace)

BONUS = $(addsuffix .c, ft_lstnew \
						ft_lstadd_front \
						ft_lstsize \
						ft_lstlast \
						ft_lstadd_back \
						ft_lstdelone \
						ft_lstclear \
						ft_lstiter \
						ft_lstmap)

OBJ = $(SRC:%.c=%.o)

BONUS_OBJ = $(BONUS:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJ) 
	@$(AR) $(ARFLAGS) $@ $^

bonus: $(OBJ) $(BONUS_OBJ)
	@$(AR) $(ARFLAGS) $(NAME) $^

%.o: %.c
	@$(CC) $(CCFLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJ) $(BONUS_OBJ)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus