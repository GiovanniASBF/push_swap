/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaguiar- <gaguiar-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 14:19:55 by gaguiar-          #+#    #+#             */
/*   Updated: 2025/10/29 10:37:59 by gaguiar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	main(int argc, char*argv[])
{
	int		i;
	char	*str;
	char	*temp;

	if (argc <= 1)
		return (0);
	i = 0;
	str = "\0";
	while (argv[i])
	{
		temp = str;
		str = ft_strjoin(temp, argv[i]);
		free(temp);
		temp = str;
		str = ft_strjoin(temp, " ");
		free(temp);
	}

	printf("%s\n", str);
}

/*
verificar se são inteiros validos [usar o isdigit()]
		verificar se não é maior ou menor que o maxint e minint
		
		verificar se não há duplicatas
		--
		criar um indice 
		a cada valor percorrido, adicionar ele ao indice
		para cada novo valor, percorrer o indice e ver se esse valor já foi colocado lá
*/
