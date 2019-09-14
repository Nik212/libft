/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slupe <slupe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 18:22:18 by slupe             #+#    #+#             */
/*   Updated: 2019/09/14 18:29:07 by slupe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *ptr;
	char letter;

	ptr = (char *)s + ft_strlen(s);
	letter = (char)c;
	while (ptr >= s)
	{
		if (*ptr == letter)
			return (ptr);
		ptr--;
	}
	return (0);
}
