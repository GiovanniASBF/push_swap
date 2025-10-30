/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_handler.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaguiar- <gaguiar-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 17:10:39 by gaguiar-          #+#    #+#             */
/*   Updated: 2025/10/30 17:24:05 by gaguiar-         ###   ########.fr       */
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

t_list	*lstdup(t_list *head)
{
	t_list	*current;
	t_list	*new_head;
	t_list	*new_node;

	new_head = NULL;
	current = head;
	while (current)
	{
		new_node = fill_new_node(*(int *)(current->content));
		if (!new_node)
		{
			ft_lstclear(&new_head, &free);
			return (NULL);
		}
		ft_lstadd_back(&new_head, new_node);
		current = current-> next;
	}
	return (new_head);
}

int	index_list(t_list *iter_node, int refer_val, int lst_index)
{
	while (iter_node)
	{
		if (refer_val > *(int *)(iter_node->content))
			lst_index++;
		iter_node = iter_node->next;
	}
	return (lst_index);
}

void	index_manager(t_list **head_ptr)
{
	t_list	*copy_head;
	t_list	*iterator_node;
	t_list	*reference_node;
	int		refer_val;
	int		lst_index;

	if (!head_ptr || !*head_ptr)
		return ;
	copy_head = lstdup(*head_ptr);
	if (!copy_head)
		handle_error(head_ptr, NULL);
	reference_node = *head_ptr;
	while (reference_node)
	{
		refer_val = *(int *)(reference_node->content);
		lst_index = 0;
		iterator_node = copy_head;
		lst_index = index_list(iterator_node, refer_val, lst_index);
		*(int *)(reference_node->content) = lst_index;
		reference_node = reference_node->next;
	}
	ft_lstclear(&copy_head, &free);
}
