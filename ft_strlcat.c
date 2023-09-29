/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmateo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 11:14:33 by anmateo-          #+#    #+#             */
/*   Updated: 2023/09/29 11:37:45 by anmateo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	i;

	while (*dest)
		dest++;
	i = 0;
	while (src[i] && i < n)
	{
		*dest = src[i];
		i++;
		dest++;
	}
	*dest = '\0';
	return (ft_strlen(dest) + ft_strlen(src));
}
