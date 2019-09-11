/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slupe <slupe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 16:22:39 by slupe             #+#    #+#             */
/*   Updated: 2019/09/11 16:30:40 by slupe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t		len;
	size_t		i;
	char	*new_string;

	new_string = 0;
	len = ft_strlen(s);
	if (s && f)
	{
		new_string = ft_strnew(len);
		while (s[i])
		{
			new_string[i] = s[i];
			printf(new_string[i++]);
		}
	}
}
