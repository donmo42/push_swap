
#include "../src/push_swap.h"

char	*ft_strdup(const char *src)
{
	size_t	i;
	size_t	srclen;
	char	*srcpy;

	i = 0;
	srclen = ft_strlen(src);
	srcpy = malloc((srclen + 1) * sizeof(char));
	if (!srcpy)
		return (NULL);
	while (i < srclen)
	{
		srcpy[i] = src[i];
		i++;
	}
	srcpy[i] = '\0';
	return (srcpy);
}