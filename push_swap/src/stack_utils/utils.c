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

char	**argument_unifier(char*argv[])
{
	int		i;
	char	*str;
	char	*temp;
	char	**result;

	i = 1;
	str = ft_strdup("");
	if (!str)
		return (NULL);
	while (argv[i])
	{
		temp = str;
		str = ft_strjoin(temp, argv[i++]);
		free(temp);
		if (!str)
			return (NULL);
		temp = str;
		str = ft_strjoin(temp, " ");
		free(temp);
		if (!str)
			return (NULL);
	}
	result = ft_split(str, ' ');
	free(str);
	return (result);
}

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
