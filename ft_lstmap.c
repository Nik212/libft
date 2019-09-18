/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slupe <slupe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 17:10:12 by slupe             #+#    #+#             */
/*   Updated: 2019/09/18 18:44:59 by slupe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *ptr;

	ptr = NULL;
	if (f && lst)
	{
		while (lst)
		{
			ft_lstappend(&ptr, f(lst));
			lst = lst->next;
		}
	}
	return (ptr);
}
