/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slupe <slupe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 16:22:39 by slupe             #+#    #+#             */
/*   Updated: 2019/09/14 17:18:06 by slupe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t		len;
	size_t		i;
	char		*new_string;

	new_string = 0;
	len = ft_strlen(s);
	i = 0;
	if (s && f)
	{
		new_string = ft_strnew(len);
		if (!new_string)
			return (0);
		while (s[i])
		{
			new_string[i] = f(i, s[i]);
			i++;
		}
		new_string[i] = '\0';
	}
	return (new_string);
}
