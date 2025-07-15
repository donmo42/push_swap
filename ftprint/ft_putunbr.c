#include "../src/push_swap.h"

int	ft_putunbr(const unsigned int n)
{
	int	x;
	
	x = 0;
	if (n >= 10)
	{
		x += ft_putunbr(n / 10);
		x += ft_putunbr(n % 10);
	}
	else
	{
		 ft_putchar(n + '0');
		 x ++;
	}
	return (x);
}