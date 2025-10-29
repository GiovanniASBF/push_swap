/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaguiar- <gaguiar-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 16:26:35 by gaguiar-          #+#    #+#             */
/*   Updated: 2025/10/29 17:05:02 by gaguiar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	parse_and_validate(t_list	**stack_a, int argc, char*argv[])
{
	char	**arglist;
	int		i;
	long	n_long;
	t_list	*node;

	arglist = argument_unifier(argv);
	if (!arglist || !only_digits(arglist))
		handle_error(stack_a, arglist);
	i = 0;
	while (arglist[i])
	{
		n_long = ft_atol(arglist[i]);
		if ((n_long > 2147483647) || (n_long < -2147483648))
			handle_error(stack_a, arglist);
		printf("%s ", arglist[i]);
		i++;
	}
}
