/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slupe <slupe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 15:39:45 by slupe             #+#    #+#             */
/*   Updated: 2019/09/11 16:19:40 by slupe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	len;
	size_t	i;
	char	*new_string;

	if (s && f)
	{
		len = ft_strlen(s);
		new_string = (char *)malloc(sizeof(char) * len + 1);
		i = 0;
		while (len--)
		{
			new_string[i] = f(s[i++]);
		}
		return (new_string);
	}
}
