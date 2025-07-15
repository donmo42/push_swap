#include "../src/push_swap.h"


int	espaces(const char *str)
{
	int	i;

	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\r' || str[i] == '\v' || str[i] == '\f')
	{
	i++;
	}
	return (i);
}

int	ispositif(const char *str, int i)
{
	int	sign;

	sign = 1;
	if (str[i] == '-')
	{
		sign = -1;
	}
	else if (str[i] == '+')
	{
		sign = 1;
	}
	return (sign);
}

int	maxmin(int result, int sign)
{
	int	int_max;
	int	int_min;

	int_max = 2147483647;
	int_min = -2147483648;
	if (result * sign > int_max)
	{
		return (int_max);
	}
	else if (result * sign < int_min)
	{
		return (int_min);
	}
	return (0);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	espaces(str);
	i = espaces(str);
	sign = ispositif(str, i);
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		maxmin (result, sign);
		i++;
	}
	return (result * sign);
}