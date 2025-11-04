/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_large.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaguiar- <gaguiar-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 14:04:08 by gaguiar-          #+#    #+#             */
/*   Updated: 2025/11/04 14:39:13 by gaguiar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	get_max_bits(int max_index)
{
	int	bits;

	bits = 0;
	while (max_index > 0)
	{
		max_index = max_index >> 1;
		bits++;
	}
	return (bits);
}

void	radix_by_bit(t_list **stack_a, t_list **stack_b, int size)
{
	int	current_index;
	int	i;
	int	j;
	int	max_bits;
	int	max_index;

	max_index = size - 1;
	max_bits = get_max_bits(max_index);
	i = 0;
	while (i < max_bits)
	{
		j = 0;
		while (j < size)
		{
			current_index = *(int *)((*stack_a)->content);
			if (((current_index >> i) & 1) == 0)
				pb(stack_a, stack_b);
			else
				ra(stack_a, stack_b);
			j++;
		}
		while (*stack_b)
			pa(stack_a, stack_b);
		i++;
	}
}
