/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_handler.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaguiar- <gaguiar-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 17:10:39 by gaguiar-          #+#    #+#             */
/*   Updated: 2025/10/29 18:22:16 by gaguiar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*fill_new_node(int value)
{
	int		*content_ptr;
	t_list	*new_node;

	content_ptr = malloc(sizeof(int));
	if (!content_ptr)
		return (NULL);
	*content_ptr = value;
	new_node = ft_lstnew(content_ptr);
	if (!new_node)
	{
		free(content_ptr);
		return (NULL);
	}
	return (new_node);
}

void	index_list(t_list *head)
{
	t_list	*reference_node;
	t_list	*iterator_node;
	int		refer_val;
	int		lst_index;

	if (!head)
		return ;
	reference_node = head;
	while (reference_node)
	{
		refer_val = *(int *)(reference_node->content);
		lst_index = 0;
		iterator_node = head;
		while (iterator_node)
		{
			if (refer_val > *(int *)(iterator_node->content))
				lst_index++;
			iterator_node = iterator_node->next;
		}
		*(int *)(reference_node->content) = lst_index;
		reference_node = reference_node->next;
	}
}
