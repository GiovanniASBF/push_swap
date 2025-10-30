/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorter.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaguiar- <gaguiar-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 13:02:42 by gaguiar-          #+#    #+#             */
/*   Updated: 2025/10/30 13:09:01 by gaguiar-         ###   ########.fr       */
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
