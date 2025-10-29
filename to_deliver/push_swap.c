/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaguiar- <gaguiar-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 14:19:55 by gaguiar-          #+#    #+#             */
/*   Updated: 2025/10/29 11:58:17 by gaguiar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	main(int argc, char*argv[])
{
	int		i;
	char	**arglist;

	if (argc <= 1)
		return (0);
	i = 0;
	arglist = argument_unifier(argv);
	while (arglist[i])
	{
		printf("%s ", arglist[i]);
		i++;
	}
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
