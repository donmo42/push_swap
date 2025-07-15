#include "../src/push_swap.h"

void	ft_ra(int *nb, int ac)
{
	int	tmp;
	int	i;

	if (ac > 1)
	{
		i = 0;
		tmp = nb[0];
		while (i < ac - 1)
		{
			nb[i] = nb[i + 1];
			i++;
		}
		nb[i] = tmp;
	}
	ft_printf("ra\n");
}

void	ft_rb(int *nb, int ac)
{
	int	tmp;
	int	i;

	if (ac > 1)
	{
		i = 0;
		tmp = nb[0];
		while (i < ac)
		{
			nb[i] = nb[i + 1];
			i++;
		}
		nb[ac] = tmp;
	}
	ft_printf("rb \n");
}

void	ft_rr(int *nb, int ac)
{
	ft_ra(nb, ac);
	ft_ra(nb, ac);
	ft_printf("rr\n");
}