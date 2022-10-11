NAME	= libft.a
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
OBJ_DIR	= obj/

SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	ft_toupper.c ft_tolower.c ft_atoi.c ft_strlen.c ft_strchr.c ft_strrchr.c \
	ft_strncmp.c ft_strlcpy.c ft_strlcat.c ft_strnstr.c ft_strdup.c ft_bzero.c \
	ft_memset.c ft_memcpy.c ft_memchr.c ft_memcmp.c ft_memmove.c ft_calloc.c \
	ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c \
	ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

SRC_B = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
	ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c

OBJ = $(addprefix $(OBJ_DIR), $(SRC:.c=.o))
OBJ_B = $(addprefix $(OBJ_DIR), $(SRC_B:.c=.o))

OBJF	=	.cache_exists

all: $(NAME)

$(NAME): $(OBJ)
		ar r $(NAME) $(OBJ)

$(OBJ_DIR)%.o : $(SRC) $(SRC_B) | $(OBJF)
			@$(CC) $(CFLAGS) -c $< -o $@

$(OBJF):
	@mkdir -p $(OBJ_DIR)

bonus: $(OBJ_B)
	ar r $(NAME) $(OBJ_B)

clean:
	rm -f *.o
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)
	rm -rf $(OBJ_DIR)

re: fclean all

.PHONY: bonus all clean fclean re
