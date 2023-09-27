/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmateo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 11:21:26 by anmateo-          #+#    #+#             */
/*   Updated: 2023/09/27 11:45:18 by anmateo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	pos_return;

	i = 0;
	pos_return = -1;
	while (s[i])
	{
		if (s[i] == (char) c)
			pos_return = i;
		i++;
	}
	if (pos_return != -1)
		return ((char *) &s[pos_return]);
	if (c == '\0')
		return ((char *) &s[i]);
	return (0);
}
