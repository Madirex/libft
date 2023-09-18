#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	usigned long	i;
	char	*d;

	d = (char *)s;
	i = 0;
	while(i < n)
	{
		d[i] = char(c);
		i++;
	}
	return (s);
}
