#include "push_swap.h"

void	check_max_min(int argv, char **argv2, int *a, int *b)
{
	int	j;

	j = 0;
	if (argv > 2147483647 || argv < -2147483648)
	{
		while (argv2[j])
		{
			free(argv2[j]);
			j++;
		}
		free(argv2);
		ft_free(a, b);
		write(1, "Error\n", 6);
		exit(0);
	}
}

int	check_order(int *nb, int sa)
{
	int	i;

	i = 0;
	while (i < sa - 1)
	{
		if (nb[i] > nb[i + 1])
			return (0);
		i++;
	}
	return (1);
}

int	acone(char **argvchar)
{
	long	size_b;

	size_b = ft_atoi(argvchar[0]);
	if (size_b > 2147483646 || size_b < -2147483646)
	{
		write(1, "Error\n", 6);
		free(argvchar[0]);
		free(argvchar);
		exit(0);
	}
	free(argvchar[0]);
	free(argvchar);
	return (size_b);
}

void	push_function(int size_a, int size_b, int *a, int *b)
{
	if (size_a == 2 || size_a == 3)
		twothree_sort(a, size_a);
	else if (size_a == 4 || size_a == 5)
		four_sort(a, b, &size_a, &size_b);
	else if (size_a > 5)
		radix(a, b, &size_a, &size_b);
}