/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   entry_validate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaguiar- <gaguiar-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 17:22:24 by gaguiar-          #+#    #+#             */
/*   Updated: 2025/10/27 17:31:20 by gaguiar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_valid_integer(char *argv)
{
	char	*sup;

	sup = argv;
	if (*sup == '\0')
		return (0);
	if (*sup == '=' || *sup == '-')
		sup++;
	if (*sup == '\0')
		return (0);
	while (*sup != '\0')
	{
		if (*sup < '0' || *sup > '9')
			return (0);
		sup++;
	}
	return (1);
}
