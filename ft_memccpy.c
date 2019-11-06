/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slupe <slupe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 15:11:33 by slupe             #+#    #+#             */
/*   Updated: 2019/09/19 11:23:20 by slupe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*dst;
	unsigned char	*s;

	i = 0;
	dst = (unsigned char *)dest;
	s = (unsigned char *)src;
	while (i < n)
	{
		dst[i] = s[i];
		if (s[i] == ((unsigned char)c))
			return ((void *)(dest + 1 + i));
		i++;
	}
	return (NULL);
}
