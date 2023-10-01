#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	needle_length;

	if (needle[0] == '\0')
		return ((char *)haystack);
	i = 0;
	needle_length = ft_strlen(needle);
	while(haystack[i] != '\0' && i + needle_length <= len)
	{
		if (haystack[i] == needle[0] && 
				ft_strncmp(haystack, needle, needle_length) == 0)
		{
			return ((char *)&haystack[i]);
		}
		i++;
	}
	return (0);
}
