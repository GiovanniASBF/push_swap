/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotator.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaguiar- <gaguiar-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 12:38:41 by gaguiar-          #+#    #+#             */
/*   Updated: 2025/10/30 12:50:01 by gaguiar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	do_reverse_rotate(t_list **stack_head)
{
	t_list	*penultimate;
	t_list	*last;

	if (!stack_head || !*stack_head || !(*stack_head)->next)
		return ;
	penultimate = *stack_head;
	last = penultimate->next;
	while (last->next)
	{
		penultimate = last;
		last = last->next;
	}
	penultimate->next = NULL;
	ft_lstadd_front(stack_head, last);
}

void	rra(t_list **stack_a, t_list **stack_b)
{
	(void)stack_b;
	do_reverse_rotate(stack_a);
	print_op("rra");
}

void	rrb(t_list **stack_a, t_list **stack_b)
{
	(void)stack_a;
	do_reverse_rotate(stack_b);
	print_op("rrb");
}

void	rrr(t_list **stack_a, t_list **stack_b)
{
	do_reverse_rotate(stack_a);
	do_reverse_rotate(stack_b);
	print_op("rrr");
}
