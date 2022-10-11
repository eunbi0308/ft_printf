NAME		= libftprintf.a
CC			= gcc
CFLAGS		= -Wall -Wextra -Werror
OBJ_DIR		= obj/
PRINT_DIR	= print/
HEADERS		= ./headers
LIBFT		= libft

FORMATS	= ft_print_char.c ft_print_hex.c ft_print_number.c \
			ft_print_pointer.c ft_print_string.c ft_print_unsigned.c

OBJ	= $(addprefix $(OBJ_DIR), $(FORMATS:.c=.o))

OBJF = .cache_exists

all: $(NAME)

$(NAME):	$(OBJ)
			ar r $(NAME) $(OBJ)
			make $(LIBFT)
			cp libft/libft.a .
			mv libft.a $(NAME)

$(OBJ_DIR)%.o: $(PRINT_DIR)%.c | $(OBJ_DIR)
			@$(CC) $(CFLAGS) $(HEADERS) -c $< -o $@

$(OBJF):
	@mkdir -p $(OBJ_DIR)

clean:
		rm -rf $(OBJ_DIR)
		make clean -C $(LIBFT)

fclean: clean
		rm -f $(NAME)
		rm -f $(LIBFT)/libft.a

re:	fclean all

norm: 
	@norminette $(FORMATS) $(LIBFT) | grep -v Norme -B1 || true