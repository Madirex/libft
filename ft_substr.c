/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmateo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 10:58:23 by anmateo-          #+#    #+#             */
/*   Updated: 2023/10/03 11:55:05 by anmateo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*str_return;

	if (!s)
		return (0);
	if ((size_t)start > ft_strlen(s))
		return (ft_strdup(""));
	str_return = malloc((len + 1) * sizeof(char));
	i = 0;
	if (!str_return)
		return (0);
	while (i < len)
	{
		str_return[i] = *(s + start + i);
		i++;
	}
	str_return[i] = '\0';
	return (str_return);
}
