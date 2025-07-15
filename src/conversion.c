#include "./push_swap.h"

int	*ft_conversion(int *a, char **argv, int ac)
{
	char	**stockargv;
	char	*jointargv;
	int		i;

	i = 1;
	jointargv = ft_strdup(" ");
	while (i < ac)
	{
		jointargv = ft_strjoin(jointargv, argv[i]);
		jointargv = ft_strjoin(jointargv, " ");
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
	return (a);
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

	i = 0;
	rank = 0;
	newnb = malloc(ac * sizeof(int));
	if (!newnb)
		return (NULL);
	while (i < ac)
	{
		j = 0;
		rank = 0;
		while (j < ac)
		{
			if (nb[i] > nb[j])
				rank++;
			j++;
		}
		newnb[i] = rank;
		i++;
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