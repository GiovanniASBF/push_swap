/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swapper.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaguiar- <gaguiar-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 11:57:39 by gaguiar-          #+#    #+#             */
/*   Updated: 2025/10/30 17:08:09 by gaguiar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	do_swap(t_list **stack_head)
{
	t_list	*first;
	t_list	*second;
	void	*temp;

	if (!stack_head || !*stack_head || !(*stack_head)->next)
		return ;
	first = *stack_head;
	second = first->next;
	temp = first->content;
	first->content = second->content;
	second->content = temp;
}

void	sa(t_list **stack_a, t_list **stack_b)
{
	(void)stack_b;
	do_swap(stack_a);
	print_op("sa");
}

void	sb(t_list **stack_a, t_list **stack_b)
{
	(void)stack_a;
	do_swap(stack_b);
	print_op("sb");
}

void	ss(t_list **stack_a, t_list **stack_b)
{
	do_swap(stack_a);
	do_swap(stack_b);
	print_op("ss");
}
