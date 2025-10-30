/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotator.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaguiar- <gaguiar-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 12:30:15 by gaguiar-          #+#    #+#             */
/*   Updated: 2025/10/30 12:33:02 by gaguiar-         ###   ########.fr       */
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
