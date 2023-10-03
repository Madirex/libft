/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmateo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 11:08:24 by anmateo-          #+#    #+#             */
/*   Updated: 2023/10/03 12:06:51 by anmateo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_splits(char const *s, char delim)
{
	int	n_splits;
	int	i;
	int	word_detected;

	n_splits = 0;
	i = 0;
	word_detected = 0;
	while (s[i] == delim && s[i] != 0)
		i++;
	while (s[i] != delim && s[i] != 0)
	{
		i++;
		word_detected = 1;
	}
	if (word_detected)
	{
		n_splits++;
		word_detected = 0;
	}
	return (n_splits);
}

static int	save_str(const char *s, char *str, int end, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		str[i] = s[end - len + i];
		i++;
	}
	str[i] = '\0';
	return (0);
}

static int	pre_save_str(const char *s, char **matrix, t_split_args vals)
{
	int	i;

	i = 0;
	if (!matrix[vals.curr_n])
	{
		while (i < vals.curr_n)
			free(matrix[i++]);
		free(matrix);
		return (-1);
	}
	save_str(s, matrix[vals.curr_n], vals.i, vals.len);
	return (0);
}

static int	split_strings(const char *s, char **matrix, char delim,
		int n_splits)
{
	t_split_args	vals;

	vals.i = 0;
	vals.len = 0;
	vals.curr_n = 0;
	vals.n = n_splits;
	while (vals.curr_n < n_splits)
	{
		if ((s[vals.i] == delim || s[vals.i] == 0) && vals.len != 0)
		{
			matrix[vals.curr_n] = malloc((vals.len + 1) * sizeof(char));
			if (pre_save_str(s, matrix, vals) == -1)
				return (-1);
			vals.curr_n++;
			vals.len = -1;
		}
		else if (s[vals.i] == delim && vals.len == 0)
			vals.len = -1;
		vals.len++;
		vals.i++;
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**matrix;
	int		splits;

	if (!s)
		return (0);
	splits = count_splits(s, c);
	matrix = malloc((splits + 1) * sizeof(char *));
	if (!matrix)
		return (0);
	matrix[splits] = 0;
	if (splits == 0)
		return (matrix);
	split_strings(s, matrix, c, splits);
	return (matrix);
}
