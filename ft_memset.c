/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmateo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 10:16:24 by anmateo-          #+#    #+#             */
/*   Updated: 2023/09/20 11:00:21 by anmateo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	usigned long	i;
	char			*d;

	d = (char *)s;
	i = 0;
	while (i < n)
	{
		d[i] = char (c);
		i++;
	}
	return (s);
}
