#include "./push_swap.h"

void	radix(int *nb, int *nb2, int *size_a, int *size_b)
{
	int *nbcpy;
	int bits;
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = *size_a;
	printf("%d k  ,", k);
	bits = max_bits(nb, *size_a);
	nbcpy = normaliz_tab(nb, *size_a);
	while (i < bits)
	{
		j = 0;
		while (j < k)
		{
			if ((nbcpy[0] >> i) == 0)
				ft_pb(nb, nb2, size_a, size_b);
			else
				ft_ra(nb, *size_a);
			j++;
		}
		while (size_b > 0)
			ft_pa(nb, nb2, size_a, size_b);
		i++;
	}
}