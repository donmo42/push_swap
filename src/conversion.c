#include "./push_swap.h"

void	ft_conversion(int *a, char **argv, int ac)
{
	char	**stockargv;
	char	*jointargv;
	char	*tmp;
	int		i;

	i = 1;
	jointargv = ft_strdup(" ");
	while (i < ac)
	{
		tmp = ft_strjoin(jointargv, argv[i]);
		free(jointargv);
		jointargv = tmp;
		tmp = ft_strjoin(jointargv, " ");
		free(jointargv);
		jointargv = tmp;
		i++;
	}
	stockargv = ft_split(jointargv, ' ');
	free(jointargv);
	i = 0;
	while (stockargv[i])
	{
		a[i] = ft_atoi(stockargv[i]);
		i++;
	}
	free(stockargv);
}

int	ra_themin(int *nb, int ac)
{
	int	lownbr;
	int	i;

	lownbr = nb[0];
	i = 0;
	while (i < ac)
	{
		if (lownbr > nb[i])
			lownbr = nb[i];
		i++;
	}
	return (lownbr);
}

int	*normaliz_tab(int *nb, int ac)
{
	int	i;
	int	j;
	int	*newnb;
	int	rank;

	i = -1;
	rank = 0;
	newnb = malloc(ac * sizeof(int)); //malloc autorisé?
	if (!newnb)
		return (0) ;
	while (++i < ac)
	{
		j = -1;
		rank = 0;
		while (++j < ac)
		{
			if (nb[i] > nb[j])
				rank++;
		}
		newnb[i] = rank;
	}
	return (newnb);
	
}

int	max_bits(int *nb, int ac)
{
	int i;
	int x;

	i = 0;
	x = 0;
	while (i < ac)
	{
		if (nb[i] > x)
			x = nb[i];
		i++;
	}
	i = 0;
	while (x >> i != 0)
		i++;
	return (i);
}