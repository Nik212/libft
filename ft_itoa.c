/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slupe <slupe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 15:50:02 by slupe             #+#    #+#             */
/*   Updated: 2019/09/13 16:18:16 by slupe            ###   ########.fr       */
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
	size_t	len;
	long	nbr;
	char	*pointer;
	char	*base_string;

	nbr = value;
	base_string = "0123456789ABCDEF";
	len = num_len(value);
	if (value == 0)
		return ("0");
	if (!(pointer = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	pointer[len] = '\0';
	while (nbr)
	{
		pointer[--len] = base_string[nbr % 10];
		nbr /= 10;
	}
	if (value < 0)
		pointer[0] = '-';
	return (pointer);
}
