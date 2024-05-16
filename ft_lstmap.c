/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagomad <amagomad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 19:57:16 by amagomad          #+#    #+#             */
/*   Updated: 2024/05/03 20:09:11 by amagomad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*list;
	t_list	*list2;

	if (!lst || !del)
		return (NULL);
	list = NULL;
	while (lst)
	{
		list2 = ft_lstnew((*f)(lst->content));
		if (!list2)
		{
			while (list)
			{
				list2 = list->next;
				(*del)(list->content);
				free(list);
				list = list2;
			}
			lst = NULL;
			return (NULL);
		}
		ft_lstadd_back(&list, list2);
		lst = lst->next;
	}
	return (list);
}
