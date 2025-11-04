/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaguiar- <gaguiar-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 14:19:55 by gaguiar-          #+#    #+#             */
/*   Updated: 2025/11/04 12:34:38 by gaguiar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

	ft_lstclear(&stack_a, &free);
	ft_lstclear(&stack_b, &free);

	return (0);
}
