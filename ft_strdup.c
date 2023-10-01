#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	int	i;
	char	*src;

	src = (char *) s1;
	str = malloc((ft_strlen(src) + 1) + sizeof(char));
	if (str)
	{
		i = 0;
		while (s1[i])
		{
			str[i] = s1[i];
			i++;
		}
		str[i] = '\0';
	}
	return (str);
}
