# Name of the final executable
NAME = push_swap

# Source files
SOURCES = sources/operations_rotate.c sources/operations_rrotate.c sources/operations_swap&push.c \
sources/push_swap.c sources/push_swap_utils.c sources/push_swap_utils2.c sources/push_swap_utils3.c \
sources/sort_for_3.c

# Object files
OBJECTS = $(SOURCES:.c=.o)

# Compiler and flags
CC = cc
CFLAGS = -Wall -Werror -Wextra -Iincludes

# Paths
LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a

# Target for all
all: $(LIBFT) $(NAME)

# Target for the final executable
$(NAME): $(OBJECTS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJECTS) $(LIBFT)

# Rule to build object files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Rule to build the libft library
$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

# Clean object files
clean:
	@rm -f $(OBJECTS)
	@$(MAKE) -C $(LIBFT_DIR) clean
	
# Full clean, including the executable and libft
fclean: clean
	@rm -f $(NAME)
	@$(MAKE) -C $(LIBFT_DIR) fclean

# Rebuild everything
re: fclean all

# Phony targets
.PHONY: all clean fclean re