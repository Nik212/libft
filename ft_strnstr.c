/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slupe <slupe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 18:48:01 by slupe             #+#    #+#             */
/*   Updated: 2019/09/14 18:53:55 by slupe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*h;
	size_t	n_len;
	size_t	i;
	size_t	j;

	h = (char *)haystack;
	if (!(n_len = ft_strlen(needle)))
		return (h);
	if (ft_strlen(haystack) < n_len || len < n_len)
		return (0);
	i = 0;
	while (h[i] != '\0' && i <= len - n_len)
	{
		j = 0;
		while (needle[j] && needle[j] == h[i + j])
			j++;
		if (j == n_len)
			return (&h[i]);
		i++;
	}
	return (0);
}
