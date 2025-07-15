#include "../src/push_swap.h"

int	ft_printadrss(const unsigned long n)
{
	int	x;
	
	x = 0;
	if (n >= 16)
	{
		x += ft_printadrss(n / 16);
		x += ft_printadrss(n % 16);
		
	}
	else
	{
		if (n < 10)
		{
			ft_putchar(n + '0');
			x ++;
		}
		else
		{
			ft_putchar(n - 10 + 'a');
			x ++;
		}
	}
	return (x);
}

int	ft_putpointer(void *pointer)
{
	int x;

	x = 0;
	if (!pointer)
	{
		x = 3;
		return (write(1, "(nil)", 5));
		
	}
	else
	{
		ft_putstr("0x");
		x = ft_printadrss((const unsigned long) pointer) + 2;
	}
	return (x);
}