#include "../src/push_swap.h"

void	ft_rra(int *nb, int ac)
{
	int	tmp;
	int	i;

	if (ac - 1 > 1)
	{
		tmp = nb[ac - 1];
		i = ac - 1;
		while (i > 0)
		{
			nb[i] = nb[i - 1];
			i--;
		}
		nb[0] = tmp;
	}
	ft_printf("rra\n");
}

void	ft_rrb(int *nb, int ac)
{
	int	tmp;
	int	i;

	if (ac - 1 > 1)
	{
		tmp = nb[ac - 1];
		i = ac - 1;
		while (i > 0)
		{
			nb[i] = nb[i - 1];
			i--;
		}
		nb[0] = tmp;
	}
	ft_printf("rrb\n");
}

void	ft_rrr(int *nb, int *nb2, int ac)
{
	ft_rrb(nb, ac);
	ft_rra(nb2, ac);
	ft_printf("rrr\n");
}