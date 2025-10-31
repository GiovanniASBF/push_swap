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