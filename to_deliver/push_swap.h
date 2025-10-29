/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaguiar- <gaguiar-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 14:25:36 by gaguiar-          #+#    #+#             */
/*   Updated: 2025/10/29 17:14:17 by gaguiar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"

typedef struct s_node
{
	int				number;
	int				index;
	struct s_node	*next;
}	t_node;

char	**argument_unifier(char*argv[]);
t_list	*fill_new_node(int value);
void	free_split_array(char **args);
long	ft_atol(const char *nptr);
void	handle_error(t_list **stack_a, char **args);
int		only_digits(char	**args);
void	parse_and_validate(t_list	**stack_a, int argc, char*argv[]);

#endif