##In Docker execute command is "docker compose run --rm maker"

NAME		= libftprintf.a
CC			= gcc
CFLAGS		= -Wall -Wextra -Werror
OBJ_DIR		= obj/
PRINT_DIR	= print/
HEADERS		= ./headers
LIBFT		= libft

FORMATS	= ft_print_char ft_print_hex ft_print_number \
			ft_print_pointer ft_print_string ft_print_unsigned

SRC	= $(addprefix $(PRINT_DIR), $(addsuffix .c, $(FORMATS)))
OBJ	= $(addprefix $(OBJ_DIR), $(addsuffix .o, $(FORMATS)))

###

all: $(NAME)

$(NAME):	$(OBJ)
			ar rcs $(NAME) $(OBJ)
			make -C $(LIBFT)
			cp libft/libft.a .
			mv libft.a $(NAME)

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(OBJ_DIR)%.o: $(PRINT_DIR)%.c | $(OBJ_DIR)
				$(CC) $(CFLAGS) $(HEADERS) -c $< -o $@

clean:
		rm -rf $(OBJ_DIR)
		make clean -C $(LIBFT)

fclean: clean
		rm -f $(NAME)
		rm -f $(LIBFT)/libft.a

re:	fclean all

norm: 
	@norminette $(FORMATS) $(LIBFT) | grep -v Norme -B1 || true