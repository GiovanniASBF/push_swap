/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotator.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaguiar- <gaguiar-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 12:30:15 by gaguiar-          #+#    #+#             */
/*   Updated: 2025/10/30 12:37:10 by gaguiar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	do_rotate(t_list **stack_head)
{
	t_list	*first_node;

	if (!stack_head || !*stack_head || !(*stack_head)->next)
		return ;
	first_node = *stack_head;
	*stack_head = first_node->next;
	first_node->next = NULL;
	ft_lstadd_back(stack_head, first_node);
}

void	ra(t_list **stack_a, t_list **stack_b)
{
	(void)stack_b;
	do_rotate(stack_a);
	print_op("ra");
}

void	rb(t_list **stack_a, t_list **stack_b)
{
	(void)stack_a;
	do_rotate(stack_b);
	print_op("rb");
}

void	rr(t_list **stack_a, t_list **stack_b)
{
	do_rotate(stack_a);
	do_rotate(stack_b);
	print_op("rr");
}
