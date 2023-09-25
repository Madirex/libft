/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmateo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 10:18:56 by anmateo-          #+#    #+#             */
/*   Updated: 2023/09/25 10:50:18 by anmateo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str_return;
	size_t	len_return;
	unsigned int	i;

	len_return = 0;
	if (s)
		len_return = ft_strlen(s) - (len - start);
	str_return = malloc((len_return + 1) * size_of(char));
	if (!str_return)
		return (0);
	else
	{
		i = 0;
		while (i < s_len)
		{
			len_return[i] = s[start + i];
			i++;
		}
	}
	len_return[i] = '\0';
	return (len_return);
}
