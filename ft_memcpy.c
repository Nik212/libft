/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slupe <slupe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 11:01:31 by slupe             #+#    #+#             */
/*   Updated: 2019/09/17 14:54:37 by slupe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	char *dst;
	char *s;

	if (dest == NULL && src == NULL)
		return (NULL);
	dst = (char *)dest;
	s = (char *)src;
	while (len--)
		*dst++ = *s++;
	return (dest);
}
