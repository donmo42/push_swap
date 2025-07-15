#include "../src/push_swap.h"

int	ft_putnbr(int n)
{
	int	x = 1;
	if (n == -2147483648)
	{
		write (1, "-2147483648", 11);
		return (11) ;
	}

	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
		x++;
	}
	if (n >= 10)
	{
		x += ft_putnbr(n / 10);
		
	}
	ft_putchar(n % 10 + '0');
	return (x);
}