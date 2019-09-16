/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slupe <slupe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 15:50:02 by slupe             #+#    #+#             */
/*   Updated: 2019/09/15 09:25:56 by slupe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		num_len(int n)
{
	int len;
	int nbr;

	len = 0;
	nbr = n;
	while (nbr)
	{
		nbr /= 10;
		len += 1;
	}
	nbr = n;
	if (nbr < 0)
	{
		len += 1;
		nbr *= -1;
	}
	return (len);
}

char	*ft_itoa(int value)
{
	char	*pointer;

	pointer = (char *)ft_memalloc(num_len(value));
	if (value >= 0 && pointer)
	{ 
		*--pointer = '0' + (value % 10);
		value /= 10;
		while (value != 0)
		{
			*--pointer = '0' + (value % 10);
			value /= 10;
		}
	}
	else if (pointer)
	{
		*--pointer = '0' - (value % 10);
		value /= 10;
		while (value != 0)
		{
			*--pointer = '0' - (value % 10);
			value /= 10;
		}
		*--pointer = '-';
	}
	return (ft_strdup(pointer));
}
