/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pusher.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaguiar- <gaguiar-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 12:12:05 by gaguiar-          #+#    #+#             */
/*   Updated: 2025/10/30 12:21:29 by gaguiar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	do_push(t_list **stack_src, t_list **stack_dst)
{
	t_list	*node_to_move;

	if (!stack_src || !*stack_src)
		return ;
	node_to_move = *stack_src;
	*stack_src = node_to_move->next;
	ft_lstadd_front(stack_dst, node_to_move);
}
