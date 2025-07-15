#include "../src/push_swap.h"

int	ft_puthexamin(const unsigned int n)
{
	int	x;
	
	x = 0;
	if (n >= 16)
	{
		x += ft_puthexamaj(n / 16);
		x += ft_puthexamaj(n % 16);
	}
	else
	{
		if (n < 10)
		{
			ft_putchar(n + '0');
			x++ ;
		}
		else
		{
			ft_putchar(n - 10 + 'A');
		     x ++;
		}
	}
	return (x);
}