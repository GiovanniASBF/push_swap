/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaguiar- <gaguiar-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 14:25:36 by gaguiar-          #+#    #+#             */
/*   Updated: 2025/11/04 14:47:20 by gaguiar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"

char	**argument_unifier(char*argv[]);
t_list	*fill_new_node(int value);
void	free_split_array(char **args);
long	ft_atol(const char *nptr);
void	handle_error(t_list **stack_a, char **args);
int		has_duplicates(t_list *head);
void	index_manager(t_list **head_ptr);
int		is_already_sorted(t_list *head);
int		only_digits(char	**args);
void	parse_and_validate(t_list	**stack_a, char*argv[]);
void	print_op(char *operation);
void	radix_by_bit(t_list **stack_a, t_list **stack_b, int size);
void	sort2(t_list **stack_a);
void	sort3(t_list **stack_a);
void	sort5(t_list **stack_a, t_list **stack_b, int size);
void	sort_manager(t_list **stack_a, t_list **stack_b);
void	pa(t_list **stack_a, t_list **stack_b);
void	pb(t_list **stack_a, t_list **stack_b);
void	ra(t_list **stack_a, t_list **stack_b);
void	rb(t_list **stack_a, t_list **stack_b);
void	rra(t_list **stack_a, t_list **stack_b);
void	rrb(t_list **stack_a, t_list **stack_b);
void	rrr(t_list **stack_a, t_list **stack_b);
void	sa(t_list **stack_a, t_list **stack_b);
void	sb(t_list **stack_a, t_list **stack_b);
void	ss(t_list **stack_a, t_list **stack_b);

void	print_node_content(void *content);

#endif