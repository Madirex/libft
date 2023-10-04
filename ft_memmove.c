/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmateo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 10:40:35 by anmateo-          #+#    #+#             */
/*   Updated: 2023/10/04 11:37:52 by anmateo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned long	i;
	const char		*psrc;
	char			*pdest;

	psrc = (const char *) src;
	pdest = (char *) dest;
	i = 0;
	if (pdest > psrc && (dest != 0 || src != 0))
	{
		i = n;
		while (i != 0)
		{
			pdest[i - 1] = psrc[i - 1];
			i--;
		}
	}
	else
	{
		while (i < n && (dest != 0 || src != 0))
		{
			pdest[i] = psrc[i];
			i++;
		}
	}
	return (dest);
}
