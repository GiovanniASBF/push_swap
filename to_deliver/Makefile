NAME = push_swap

LIBFT = libft/libft.a

SRC = entry_validate.c \
	push_swap.c

OBJ = $(SRC:.c=.o)

CC = cc

CFLAGS = -Wall -Wextra -Werror

#rules
all: $(NAME)

$(NAME): $(OBJ) $(LIBFT)
	$(eval LIBFT_OBJ := $(shell ar -t $(LIBFT)))
	ar crs $(NAME) $(OBJ) $(addprefix libft/, $(LIBFT_OBJ))

%.o: %.c push_swap.h
	$(CC) $(CFLAGS) -c $< -o $@

$(LIBFT):
	$(MAKE) -C libft

clean:
	rm -f $(OBJ)
	$(MAKE) -C libft clean

fclean: clean
	rm -f $(NAME)
	$(MAKE) -C libft fclean

re: fclean all

.PHONY: all clean fclean re 