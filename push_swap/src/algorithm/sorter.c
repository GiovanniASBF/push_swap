/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorter.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaguiar- <gaguiar-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 12:33:24 by gaguiar-          #+#    #+#             */
/*   Updated: 2025/11/06 17:47:00 by gaguiar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_manager(t_list **stack_a, t_list **stack_b)
{
	int	size;

	size = ft_lstsize(*stack_a);
	if (is_already_sorted(*stack_a))
		return ;
	if (size == 2)
		sort2(stack_a);
	else if (size == 3)
		sort3(stack_a);
	else if (size <= 5)
		sort5(stack_a, stack_b, size);
	else
		radix_by_bit(stack_a, stack_b, size);
}
