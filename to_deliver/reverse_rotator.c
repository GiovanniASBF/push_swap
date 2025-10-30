/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotator.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaguiar- <gaguiar-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 12:38:41 by gaguiar-          #+#    #+#             */
/*   Updated: 2025/10/30 12:45:20 by gaguiar-         ###   ########.fr       */
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
