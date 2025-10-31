/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   entry_validate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaguiar- <gaguiar-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 17:22:24 by gaguiar-          #+#    #+#             */
/*   Updated: 2025/10/29 17:29:51 by gaguiar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_split_array(char **args)
{
	int	i;

	if (!args)
		return ;
	i = 0;
	while (args[i])
		free(args[i++]);
	free (args);
}

int	has_duplicates(t_list *head)
{
	t_list	*reference;
	t_list	*iterator;
	int		val_refer;

	reference = head;
	while (reference)
	{
		val_refer = *(int *)(reference->content);
		iterator = reference->next;
		while (iterator)
		{
			if (val_refer == *(int *)(iterator->content))
				return (1);
			iterator = iterator->next;
		}
		reference = reference->next;
	}
	return (0);
}
