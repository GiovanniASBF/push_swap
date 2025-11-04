#Variables
NAME = push_swap

LIBFT = libft/libft.a

SRC = src/algorithm/sort_large.c \
	src/algorithm/sort_small.c \
	src/algorithm/sorter.c \
	src/error_mgmt/error_handler.c \
	src/main/push_swap.c \
	src/operations/pusher.c \
	src/operations/swapper.c \
	src/operations/reverse_rotator.c \
	src/operations/rotator.c \
	src/output/printer.c \
	src/parse/arg_checks.c \
	src/parse/arg_free.c \
	src/parse/arg_unifier.c \
	src/parse/parse_and_validate.c \
	src/stack_utils/rank.c \
	src/stack_utils/stack_handler.c \
	test.c

OBJ = $(SRC:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror
INCLUDES = -Iinclude -Ilibft

#rules
all: $(NAME)

$(NAME): $(OBJ) $(LIBFT)
	$(CC) $(CFLAGS) $(OBJ) $(INCLUDES) -Llibft -lft -o $(NAME)

%.o: %.c include/push_swap.h
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(LIBFT):
	$(MAKE) -C libft bonus

clean:
	rm -f $(OBJ)
	$(MAKE) -C libft clean

fclean: clean
	rm -f $(NAME)
	$(MAKE) -C libft fclean

re: fclean all

.PHONY: all clean fclean re 