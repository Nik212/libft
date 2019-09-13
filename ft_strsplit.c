/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slupe <slupe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 13:43:45 by slupe             #+#    #+#             */
/*   Updated: 2019/09/13 15:48:11 by slupe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		num_words(char const *str, char c)
{
	size_t	prev_letter;
	size_t	count;

	count = 0;
	prev_letter = 0;
	while (*str)
	{
		if (*str == c && prev_letter == 0)
			count++;
		prev_letter = (*str == c) ? 0 : 1;
		str++;
	}
	return (count);
}

char	**ft_strsplit(char const *s, char c)
{
	char **array;
	size_t ar_idx;
	size_t prev_letter;
	size_t i;
	size_t start;

	if (!s)
		return (0);
	if (!(array = (char **)ft_memalloc(num_words(s, c) * sizeof(char *))))
		return (0);
	i = -1;
	prev_letter = 0;
	ar_idx = 0;
	while (s[i++])
	{
		if (prev_letter && s[i] == c)
			array[ar_idx++] = ft_strsub(s, start, i - start);
		if (!prev_letter && s[i] != c)
			start = i;
		prev_letter = (s[i] == c) ? 0 : 1;
	}
	if (prev_letter)
		array[ar_idx] = ft_strsub(s, start, i - start);
	return (array);
}
