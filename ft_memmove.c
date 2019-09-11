/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slupe <slupe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 11:03:18 by slupe             #+#    #+#             */
/*   Updated: 2019/09/11 16:53:49 by slupe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char *d;
	char *s;
	char *lastd;
	char *lasts;

	d = (char *)dest;
	s = (char *)src;
	if (d < s)
	{
		while (len--)
			*d++ = *s++;
	}
	else
	{
		lasts = s + (len - 1);
		lastd = d + (len - 1);
		while (len--)
			*lastd-- = *lasts--;
	}
	return (dest);
}
