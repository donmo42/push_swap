#include "../src/push_swap.h"

int	ft_putstr(char *s)
{
	int	slen;
	if (s == NULL)
	{
		ft_putstr("(null)");
		return (6);
	}
	slen = ft_strlen(s);
	write(1, s, slen);
	return (slen);
}