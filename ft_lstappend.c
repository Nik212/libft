/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstappend.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slupe <slupe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 18:39:16 by slupe             #+#    #+#             */
/*   Updated: 2019/09/18 18:45:44 by slupe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstappend(t_list **lst, t_list *new_element)
{
	t_list *ptr;

	if (*lst)
	{
		ptr = *lst;
		while (ptr->next)
			ptr = ptr->next;
		ptr->next = new_element;
	}
	else
		*lst = new_element;
}
