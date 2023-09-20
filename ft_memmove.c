/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmateo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 10:40:35 by anmateo-          #+#    #+#             */
/*   Updated: 2023/09/20 10:59:53 by anmateo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned int	i;

	if (dest != 0 && src != 0)
	{
		if (dest < src)
			ft_memcpy(dest, src, n);
		else
		{
			i = 0;
			while (i < n)
			{
				*(unsigned char *)(dest + i) = *(unsigned char *)(src + i);
				i++;
			}
		}
	}
	return (dest);
}
