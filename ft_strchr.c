/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slupe <slupe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 18:14:07 by slupe             #+#    #+#             */
/*   Updated: 2019/09/14 18:21:55 by slupe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char *ptr;
	char letter;

	if (!s)
		return (0);
	ptr = (char *)s;
	letter = (char)c;
	while (*ptr && *ptr != letter)
		ptr++;
	return ((*ptr == letter) ? ptr : 0);
}
