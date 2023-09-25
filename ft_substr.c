/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmateo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 10:58:23 by anmateo-          #+#    #+#             */
/*   Updated: 2023/09/25 12:25:09 by anmateo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*str_return;
	size_t			len_return;

	len_return = 0;
	if (s)
		len_return = ft_strlen(s) - (len - start);
	str_return = malloc((len_return + 1) * sizeof(char));
	if (!str_return)
		return (0);
	else
	{
		i = 0;
		while (i < s_len)
		{
			str_return[i] = s[start + i];
			i++;
		}
	}
	str_return[i] = '\0';
	return (str_return);
}
