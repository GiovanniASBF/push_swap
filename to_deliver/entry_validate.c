/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   entry_validate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaguiar- <gaguiar-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 17:22:24 by gaguiar-          #+#    #+#             */
/*   Updated: 2025/10/29 11:54:54 by gaguiar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**argument_unifier(char*argv[])
{
	int		i;
	char	*str;
	char	*temp;

	i = 1;
	str = ft_strdup("");
	if (!str)
		return (NULL);
	while (argv[i])
	{
		temp = str;
		str = ft_strjoin(temp, argv[i]);
		free(temp);
		if (!str)
			return (NULL);
		temp = str;
		str = ft_strjoin(temp, " ");
		free(temp);
		if (!str)
			return (NULL);
		i++;
	}
	return (ft_split(str, ' '));
	free(str);
}
