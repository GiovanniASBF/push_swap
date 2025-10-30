/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaguiar- <gaguiar-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 14:19:55 by gaguiar-          #+#    #+#             */
/*   Updated: 2025/10/30 17:46:28 by gaguiar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	sort_manager(t_list **stack_a, t_list **stack_b);

int	main(int argc, char*argv[])
{
	t_list	*stack_a;
	t_list	*stack_b;

	if (argc <= 1)
		return (1);
	stack_a = NULL;
	stack_b = NULL;
	parse_and_validate(&stack_a, argv);
	ft_putstr_fd("--- Test: Stack A Values ---\n", 1);
	ft_lstiter(stack_a, &print_node_content);
	ft_putstr_fd("----------------------------\n", 1);
	index_manager(&stack_a);
	ft_putstr_fd("--- Test: Indexed Stack A Values ---\n", 1);
	ft_lstiter(stack_a, &print_node_content);
	ft_putstr_fd("------------------------------------\n", 1);
	sort_manager(&stack_a, &stack_b);
}

void	sort_manager(t_list **stack_a, t_list **stack_b)
{
	int	size;

	(void)stack_b;
	size = ft_lstsize(*stack_a);
	if (is_already_sorted(*stack_a))
	{
		ft_putstr_fd("--- Is already sorted ---\n", 1);
		return ;
	}
	if (size == 2)
		sort2(stack_a);
	else if (size == 3)
		sort3(stack_a);
}
