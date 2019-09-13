/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slupe <slupe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 12:13:12 by slupe             #+#    #+#             */
/*   Updated: 2019/09/13 12:53:06 by slupe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	const char	*ptr;
	char		*lastn;

	lastn = 0;
	ptr = str;
	while (*ptr != 0 && *ptr != c)
		ptr++;
	if (*ptr == 0)
		return ((void *)ptr);
	while (n-- && lastn != ptr)
	{
		lastn = (char *)str + (n - 1);
		lastn--;
	}
	return ((void *)ptr);
}
