/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slupe <slupe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 13:04:10 by slupe             #+#    #+#             */
/*   Updated: 2019/09/17 14:58:49 by slupe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *new_str;
	char *str;

	if (!s1 || !s2)
		return (0);
	new_str = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
	str = new_str;
	if (str)
	{
		if (s1)
			while (*s1)
				*new_str++ = *s1++;
		if (s2)
			while (*s2)
				*new_str++ = *s2++;
	}
	return (str);
}
