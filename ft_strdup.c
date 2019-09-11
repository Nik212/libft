/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slupe <slupe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 13:10:17 by slupe             #+#    #+#             */
/*   Updated: 2019/09/11 16:48:45 by slupe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = malloc(sizeof(char) * ft_strlen(s1) + 1);
	if (ptr)
	{
		while (s1[i])
		{
			ptr[i] = s1[i];
			i++;
		}
	}
	ptr[i] = '\0';
	return (ptr);
}
