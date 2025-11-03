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
