#include "push_swap.h"

void	print_node_content(void *content)
{
	int	value;

	value = *(int *)content;
	ft_putnbr_fd(value, 1);
	ft_putchar_fd('\n', 1);
}
