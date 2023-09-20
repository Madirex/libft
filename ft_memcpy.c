/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmateo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 10:27:30 by anmateo-          #+#    #+#             */
/*   Updated: 2023/09/20 10:35:52 by anmateo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned long	i;
	char			*char_dest;
	char			*char_src;

	if (dst != 0 && src != 0)
	{
		i = 0;
		char_dest = (char *)dst;
		char_src = (char *)src;
		while (i < n)
		{
			char_dest[i] = char_src[i];
			i++;
		}
	}
	return (dst);
}
