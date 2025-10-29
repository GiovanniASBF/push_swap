/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   entry_validate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaguiar- <gaguiar-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 17:22:24 by gaguiar-          #+#    #+#             */
/*   Updated: 2025/10/29 16:17:49 by gaguiar-         ###   ########.fr       */
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