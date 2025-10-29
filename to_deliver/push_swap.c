/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaguiar- <gaguiar-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 14:19:55 by gaguiar-          #+#    #+#             */
/*   Updated: 2025/10/29 18:10:27 by gaguiar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

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
}
