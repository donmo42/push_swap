#include "../src/push_swap.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1s2len;
	size_t	i;
	size_t	j;
	char	*s1s2cpy;

	i = 0;
	j = 0;
	s1s2len = ft_strlen(s1) + ft_strlen(s2);
	s1s2cpy = malloc((s1s2len + 1) * sizeof(char));
	if (!s1s2cpy)
		return (NULL);
	while (s1[i])
	{
		s1s2cpy[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		s1s2cpy[i] = s2[j];
		i++;
		j++;
	}
	s1s2cpy[i] = '\0';
	return (s1s2cpy);
}