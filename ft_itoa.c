/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slupe <slupe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 15:50:02 by slupe             #+#    #+#             */
/*   Updated: 2019/09/17 18:01:31 by slupe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	num_len(int n)
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
	if (nbr <= 0)
	{
		len += 1;
		nbr *= -1;
	}
	return (len);
}

char		*ft_itoa(int nbr)
{
	int		value;
	int		len;
	char	*ptr;

	value = nbr;
	len = num_len(nbr);
	ptr = (char *)ft_memalloc(num_len(value) + 1);
	if (!(ptr))
		return (0);
	while (len--)
	{
		ptr[len] = (nbr < 0) ? (nbr % 10) * -1 + 48 : (nbr % 10) + 48;
		nbr /= 10;
	}
	if (value < 0)
		ptr[0] = '-';
	return (ptr);
}
