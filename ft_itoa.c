/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmateo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 10:14:35 by anmateo-          #+#    #+#             */
/*   Updated: 2023/10/02 11:14:09 by anmateo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_numlen(long n)
{
	int	len;

	len = 0;
	if (n < 0)
	{
		n *= -1;
		len++;
	}
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int nb)
{
	char	*str;
	long	nbl;
	int		i;

	nbl = nb;
	i = ft_numlen(nbl);
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (!str)
		return (0);
	str[i--] = '\0';
	if (nbl == 0)
	{
		str[0] = '0';
	}
	else if (nbl < 0)
	{
		str[0] = '-';
		nbl = nbl * -1;
	}
	while (nbl > 0)
	{
		str[i--] = '0' + (nbl % 10);
		nbl = nbl / 10;
	}
	return (str);
}
