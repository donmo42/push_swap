#include "../src/push_swap.h"

void	ft_pb(int *a, int *b, int *size_a, int *size_b)
{
	int	i;

	if (*size_a == 0)
		return ;
	if (*size_b > 0)
	{
		i = *size_b;
		while (i > 0)
		{
			b[i] = b[i - 1];
			i--;
		}
	}
	b[0] = a[0];
	i = 0;
	while (i < *size_a - 1)
	{
		a[i] = a[i + 1];
		i++;
	}
	(*size_a)--;
	(*size_b)++;
	ft_printf("pb\n");
}

void	ft_pa(int *a, int *b, int *size_a, int *size_b)
{
	int	i;

	i = *size_a;
	if (*size_b == 0)
		return ;
	while (i > 0)
	{
		a[i] = a[i - 1];
		i--;
	}
	a[0] = b[0];
	i = 0;
	while (i < *size_b - 1)
	{
		b[i] = b[i + 1];
		i++;
	}
	(*size_b)--;
	(*size_a)++;
	ft_printf("pa\n");
}