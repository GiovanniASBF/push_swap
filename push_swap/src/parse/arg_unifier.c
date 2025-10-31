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