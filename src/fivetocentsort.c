#include "./push_swap.h"

void	radix(int *nb, int *nb2, int *size_a, int *size_b)
{
	int	max_bit;
	int	i;
	int	size_acpy;

	size_acpy = *size_a;
	i = 0;
	normaliz_tab(nb, *size_a);
	max_bit = max_bits(nb, *size_a);
	for (int x = 0; x < size_acpy; x++)
	{
		printf("nb[%d] = %d\n", x, nb[x]);
	}
	while (i < max_bit)
	{
		size_acpy = *size_a;
		while (size_acpy--)
		{
			if ((nb[0] >> i & 1) == 1)
				ft_pb(nb, nb2, size_a, size_b);
			else
				ft_ra(nb, *size_a);
		}
		while (*size_b > 0)
			ft_pa(nb, nb2, size_a, size_b);
		i++;
	}
	for (int x = 0; x < *size_a; x++)
	{
		printf("nb[%d] = %d\n", x, nb[x]);
	}
}