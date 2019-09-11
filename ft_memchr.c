/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slupe <slupe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 12:13:12 by slupe             #+#    #+#             */
/*   Updated: 2019/09/11 12:14:25 by slupe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	char *ptr;
	char *lastn;

	lastn = NULL;
	ptr = str;
	while (*ptr != NULL && *ptr != c)
		ptr++;
	if (*ptr == NULL)
		return (ptr);
	while (n-- && lastn != ptr)
	{
		lastn = str + (n - 1);
		lastn--;
	}
	return (ptr);
}
