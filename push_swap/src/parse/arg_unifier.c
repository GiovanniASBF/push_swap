/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_unifier.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaguiar- <gaguiar-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 12:32:04 by gaguiar-          #+#    #+#             */
/*   Updated: 2025/11/04 15:20:08 by gaguiar-         ###   ########.fr       */
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
