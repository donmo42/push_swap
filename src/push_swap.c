#include "push_swap.h"
#include "push_swap.h"

int	main(int ac, char *argv[])
{
	int	*a;
	int	*b;
	int	size_a;
	int	size_b;

	size_a = ac - 1;
	size_b = 0;
	a = malloc(size_a * sizeof(int));
	b = malloc(size_a * sizeof(int));
	if (!a || !b)
		return (1);
	ft_conversion(a, argv, ac);
	
	if (size_a == 2 || size_a == 3)
		twothree_sort(a, size_a);
	else if (size_a == 4 || size_a == 5)
		four_sort(a, b, &size_a, &size_b);
	else if (size_a > 5)
		radix(a, b, &size_a, &size_b);

	free(a);
	free(b);
}