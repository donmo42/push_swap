#include "../src/push_swap.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*srcpy;
	char	*destcpy;
	size_t	i;

	srcpy = (char *)src;
	destcpy = (char *)dest;
	i = 0;
	if (dest == src || n == 0)
		return (dest);
	while (i < n)
	{
		destcpy[i] = srcpy[i];
		i ++;
	}
	return (dest);
}