/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmateo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 10:35:39 by anmateo-          #+#    #+#             */
/*   Updated: 2023/10/02 10:50:17 by anmateo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*save;

	if (lst && f && del)
	{
		new_list = ft_lstnew(f(lst->content));
		if (!new_list)
			return (0);
		save = new_list;
		lst = lst->next;
		while (lst)
		{
			new_list->next = ft_lstnew(f(lst->content));
			if (!new_list->next)
			{
				ft_lstclear(&save, del);
				return (0);
			}
			new_list = new_list->next;
			lst = lst->next;
		}
		new_list->next = 0;
		return (save);
	}
	return (0);
}
