/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmateo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 10:03:25 by anmateo-          #+#    #+#             */
/*   Updated: 2023/10/03 11:42:17 by anmateo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	needle_l;

	if (needle[0] == '\0')
		return ((char *)haystack);
	i = 0;
	needle_l = ft_strlen(needle);
	while (haystack[i] != '\0' && i + needle_l <= len)
	{
		if (haystack[i] == needle[0]
			&& ft_strncmp((char *)haystack, (char *)needle, needle_l) == 0)
		{
			return ((char *)&haystack[i]);
		}
		i++;
	}
	return (0);
}
