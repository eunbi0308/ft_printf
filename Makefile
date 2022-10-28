NAME		= libftprintf.a

CC			= gcc
CFLAGS		= -Wall -Wextra -Werror
OBJ_DIR		= obj/
PRINT_DIR	= print
LIBFT		= libft

FORMATS	= ft_print_char.c ft_print_hex.c ft_print_number.c ft_print_pointer.c ft_print_string.c ft_print_unsigned.c

OBJ	= $(addprefix $(OBJ_DIR), $(FORMATS:.c=.o))

OBJF =	.cache_exists

all: $(NAME)

$(NAME):	$(OBJ)
			@cd ./$(LIBFT) && make
			@echo "-- Libft is compiled --"
			@cp $(LIBFT)/libft.a .
			@mv libft.a $(NAME)
			@ar -rcs $(NAME) $(OBJ)
			@echo "-- Printf is compiled --"

$(OBJ_DIR)%.o: %.c | $(OBJF)
			$(CC) $(CFLAGS) -c $< -o $@

$(OBJF):
		@mkdir -p $(OBJ_DIR)

clean:
		@rm -rf $(OBJ_DIR)
		@make clean -C $(LIBFT)

fclean: clean
		@rm -f $(NAME)
		@rm -f $(LIBFT)/libft.a

re:	fclean all

.PHONY: all clean fclean re