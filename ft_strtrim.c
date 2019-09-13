/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slupe <slupe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 13:19:43 by slupe             #+#    #+#             */
/*   Updated: 2019/09/13 13:42:15 by slupe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		check_whitespace(char c)
{
	return (c == '\t' || c == ' ' || c == '\n');
}

char	*ft_strtrim(char const *s)
{
	char	*new_str;
	size_t	i;
	size_t	end;
	size_t	m;

	if (!s)
		return (0);
	i = 0;
	while (check_whitespace(s[i]) && s[i] != '\0')
		i++;
	end = ft_strlen(s);
	while (end && (check_whitespace(s[end - 1]) || s[end - 1] == '\n'))
		end--;
	new_str = ft_strnew((end > i) ? (end - i) : 0);
	m = 0;
	if (new_str)
	{
		while (i < end)
		{
			new_str[m++] = s[i++];
		}
		new_str[m] = '\0';
	}
	return (new_str);
}
