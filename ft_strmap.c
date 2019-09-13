/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slupe <slupe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 15:39:45 by slupe             #+#    #+#             */
/*   Updated: 2019/09/13 17:08:10 by slupe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	len;
	size_t	i;
	char	*new_string;

	new_string = 0;
	if (s && f)
	{
		len = ft_strlen(s);
		new_string = (char *)malloc(sizeof(char) * len + 1);
		if (!(new_string))
			return (0);
		i = 0;
		while (s[i] != '\0')
		{
			new_string[i] = f(s[i]);
			i++;
		}
		new_string[i] = '\0';
	}
	return (new_string);
}
