/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaguiar- <gaguiar-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 16:26:35 by gaguiar-          #+#    #+#             */
/*   Updated: 2025/10/29 16:31:34 by gaguiar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	parse_and_validate(t_list	**stack_a, int argc, char*argv[])
{
	char	**arglist;
	int		i;

	arglist = argument_unifier(argv);
	if (!arglist || !only_digits(arglist))
	{
		free_split_array(arglist);
		ft_putstr_fd("Error\n", 2);
		return (1);
	}
	i = 0;
	while (arglist[i])
	{
		printf("%s ", arglist[i]);
		i++;
	}
}
