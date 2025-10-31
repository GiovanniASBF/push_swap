/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorter.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaguiar- <gaguiar-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 13:02:42 by gaguiar-          #+#    #+#             */
/*   Updated: 2025/10/30 17:44:03 by gaguiar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_already_sorted(t_list *head)
{
	t_list	*current;
	int		last_index;

	if (!head)
		return (1);
	last_index = *(int *)(head->content);
	current = head->next;
	while (current)
	{
		if (*(int *)(current->content) < last_index)
			return (0);
		last_index = *(int *)(current->content);
		current = current->next;
	}
	return (1);
}

void	sort2(t_list **stack_a)
{
	if (*(int *)((*stack_a)->content) > *(int *)((*stack_a)->next->content))
		sa(stack_a, NULL);
}

void	sort3(t_list **stack_a)
{
	int	i_top;
	int	i_mid;
	int	i_bot;

	i_top = *(int *)((*stack_a)->content);
	i_mid = *(int *)((*stack_a)->next->content);
	i_bot = *(int *)((*stack_a)->next->next->content);
	if ((i_top > i_mid) && (i_top > i_bot))
		ra(stack_a, NULL);
	else if ((i_mid > i_top) && (i_mid > i_bot))
		rra(stack_a, NULL);
	if (*(int *)((*stack_a)->content) > *(int *)((*stack_a)->next->content))
		sa(stack_a, NULL);
}
