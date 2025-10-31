/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handler.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaguiar- <gaguiar-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 16:35:07 by gaguiar-          #+#    #+#             */
/*   Updated: 2025/10/29 16:43:42 by gaguiar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	handle_error(t_list **stack_a, char **args)
{
	free_split_array(args);
	if (stack_a && *stack_a)
		ft_lstclear(stack_a, &free);
	ft_putstr_fd("Error\n", 2);
	exit(EXIT_FAILURE);
}
