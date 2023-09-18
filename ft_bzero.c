#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned long	i;
	char	*string;

	string = (char *)s;
	i = 0;
	while (i < n)
	{
		string[i] = 0;
		i++;
	}
}
