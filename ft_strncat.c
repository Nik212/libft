/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slupe <slupe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 16:44:43 by slupe             #+#    #+#             */
/*   Updated: 2019/09/14 18:01:07 by slupe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *restrict d, const char *restrict s, size_t n)
{
	char *a;

	a = d;
	d += ft_strlen(d);
	while (n && *s)
	{
		*d++ = *s++;
		n--;
	}
	*d++ = 0;
	return (a);
}
