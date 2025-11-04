/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_checks.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaguiar- <gaguiar-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 12:31:54 by gaguiar-          #+#    #+#             */
/*   Updated: 2025/11/04 15:19:48 by gaguiar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	only_digits(char	**args)
{
	int	i;
	int	j;

	i = 0;
	while (args[i])
	{
		j = 0;
		if (args[i][j] == '+' || args[i][j] == '-')
				j++;
		if (args[i][j] == '\0')
			return (0);
		while (args[i][j])
		{
			if ((args[i][j] < 48) || (args[i][j] > 57))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

long	ft_atol(const char *nptr)
{
	long	number;
	long	sign;

	number = 0;
	sign = 1;
	if (*nptr == '+' || *nptr == '-')
	{
		if (*nptr == '-')
		{
			sign = -sign;
		}
		nptr++;
	}
	while (*nptr >= 48 && *nptr <= 57)
	{
		number = number * 10 + (*nptr - '0');
		nptr++;
	}
	return (sign * number);
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
