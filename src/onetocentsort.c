#include "./push_swap.h"

void	twothree_sort(int *nb, int ac)
{
	if (ac == 2)
	{
		if (nb[0] > nb[1])
			ft_sa(nb, ac);
	}
	else if (ac == 3)
	{
		if (nb[1] > nb[2] && nb[2] > nb[0])
		{
			ft_rra(nb, ac);
			ft_sa(nb, ac);
		}
		else if (nb[0] > nb[1] && nb[0] < nb[2])
			ft_sa(nb, ac);
		else if (nb[1] > nb[0] && nb[0] > nb[2])
			ft_rra(nb, ac);
		else if (nb[0] > nb[1] && nb[1] < nb[2])
			ft_ra(nb, ac);
		else if (nb[0] > nb[1] && nb[1] > nb[2])
		{
			ft_sa(nb, ac);
			ft_rra(nb, ac);
		}
	}
}

void	four_sort(int *nb, int *nb2, int *asize, int *bsize)
{
	int	min_oftab;

	if (*asize == 4)
	{
		min_oftab = ra_themin(nb, *asize);
		while (nb[0] > min_oftab)
			ft_ra(nb, *asize);
		ft_pb(nb, nb2, asize, bsize);
		twothree_sort(nb, *asize);
		ft_pa(nb, nb2, asize, bsize);
	}
	else if (*asize == 5)
	{
		min_oftab = ra_themin(nb, *asize);
		while (nb[0] > min_oftab)
			ft_ra(nb, *asize);
		ft_pb(nb, nb2, asize, bsize);
		min_oftab = ra_themin(nb, *asize);
		while (nb[0] != min_oftab)
			ft_ra(nb, *asize);
		ft_pb(nb, nb2, asize, bsize);
		twothree_sort(nb, *asize);
		ft_pa(nb, nb2, asize, bsize);
		ft_pa(nb, nb2, asize, bsize);
	}
}