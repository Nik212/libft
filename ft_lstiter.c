/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slupe <slupe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 16:59:22 by slupe             #+#    #+#             */
/*   Updated: 2019/09/18 17:06:50 by slupe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list *ptr;

	if (!lst || !f)
		return ;
	ptr = lst;
	while (ptr)
	{
		f(ptr);
		ptr = ptr->next;
	}
}
