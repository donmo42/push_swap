#include "push_swap.h"

void	ft_free(int *a, int *b)
{
	free(a);
	free(b);
}

void	check_doublons(int ac, char **argv, int *a, int *b)
{
	int	i;
	int	j;

	i = -1;
	while (++i < ac)
	{
		j = i + 1;
		while (j < ac)
		{
			if (ft_atoi(argv[i]) == ft_atoi(argv[j]))
			{
				j = 0;
				while (argv[j])
				{
					free(argv[j]);
					j++;
				}
				free(argv);
				ft_free(a, b);
				write(1, "Error\n", 6);
				exit(0);
			}
			j++;
		}
	}
}

void	check_fakedigit(char *arv, char **argv, int *a, int *b)
{
	int	i;
	int	j;

	i = 0;
	while (arv[i])
	{
		if (!ft_isdigit(arv[i]))
		{
			j = 0;
			while (argv[j])
			{
				free(argv[j]);
				j++;
			}
			free(argv);
			ft_free(a, b);
			write(1, "Error\n", 6);
			exit(0);
		}
		i++;
	}
}

void	char_to_int(char **argv, int ac, int *a, int *b)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (argv)
	{
		while (argv[i])
		{
			check_fakedigit(argv[i], argv, a, b);
			check_doublons(ac, argv, a, b);
			check_max_min(ft_atoi(argv[i]), argv, a, b);
			a[i] = ft_atoi(argv[i]);
			i++;
		}
		while (argv[j])
		{
			free(argv[j]);
			j++;
		}
		free(argv);
	}
}

int	main(int ac, char *argv[])
{
	int		*a;
	int		*b;
	int		size_a;
	int		size_b;
	char	**argvchar;

	if (ac < 2)
		return (0);
	argvchar = ft_conversion(argv, &ac);
	if (!argvchar[0] || !argvchar)
		write(1, "Error\n", 6);
	if (ac == 1)
		return (acone(argvchar));
	size_a = ac;
	size_b = 0;
	a = malloc(size_a * sizeof(int));
	b = malloc(size_a * sizeof(int));
	if (!a || !b)
		return (1);
	char_to_int(argvchar, size_a, a, b);
	if (!check_order(a, size_a))
		push_function(size_a, size_b, a, b);
	ft_free(a, b);
}