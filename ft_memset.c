/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slupe <slupe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 10:43:02 by slupe             #+#    #+#             */
/*   Updated: 2019/09/11 18:27:11 by slupe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *data, int c, size_t len)
{
	unsigned char *p;
	unsigned char letter;

	letter = (unsigned char)c;
	p = (unsigned char *)data;
	while (len--)
	{
		*p++ = c;
	}
	return (p);
}
