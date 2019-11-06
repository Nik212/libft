/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slupe <slupe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 13:37:48 by slupe             #+#    #+#             */
/*   Updated: 2019/09/14 17:20:04 by slupe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *ptr;

	ptr = (void *)malloc(sizeof(*ptr) * size);
	if (ptr)
		ft_bzero(ptr, size);
	else
		return (0);
	return (ptr);
}
