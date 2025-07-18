#include "./push_swap.h"
#include "./push_swap.h"

void	radix(int *nb, int *nb2, int *size_a, int *size_b)
{
	int	max_bit;
	int	i;
	int	size_acpy;
	
	

	size_acpy = *size_a;
	i = 0;
	nb  = normaliz_tab(nb, *size_a);
	max_bit = max_bits(nb, *size_a);
	printf("=== AVANT RADIX ===\n");
	for (int i = 0; i < *size_a; i++)
		printf("a[%d] = %d\n", i, nb[i]);

	while (i < max_bit)
	{
		size_acpy = *size_a;
		
		while (size_acpy -- )
		{
			if ((nb[0] >> i & 1) == 0)
				ft_pb(nb, nb2, size_a, size_b);
			else
				ft_ra(nb, *size_a);
		
		}
		while (*size_b > 0)
			ft_pa(nb, nb2, size_a, size_b);
		i++;
	}
	printf("=== APRÈS RADIX ===\n");
	for (int i = 0; i < *size_a; i++)
		printf("a[%d] = %d\n", i, nb[i]);

}
