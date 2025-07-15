
#include "../src/push_swap.h"

void	ft_sa(int *nb, int ac)
{
	int	tmp;

	if (ac  > 1)
	{
		tmp = nb[0];
		nb[0] = nb[1];
		nb[1] = tmp;
	}
	ft_printf("sa\n");
}

void	ft_sb(int *nb, int ac)
{
	int	tmp;

	if (ac -1 > 1)
	{
		tmp = nb[0];
		nb[0] = nb[1];
		nb[1] = tmp;
	}
	ft_printf("sb\n");
}

void	ft_ss(int *nb, int *nb2, int ac)
{
	if (ac - 1 > 1)
	{
		ft_sa(nb, ac);
		ft_sa(nb2, ac);
	}
	ft_printf("ss\n");
}