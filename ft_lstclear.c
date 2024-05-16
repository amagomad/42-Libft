/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagomad <amagomad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 18:37:41 by amagomad          #+#    #+#             */
/*   Updated: 2024/05/11 20:26:46 by amagomad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*list;
	t_list	*nol;

	if (lst != NULL)
	{
		list = *lst;
		while (list)
		{
			nol = list->next;
			ft_lstdelone(list, del);
			list = nol;
		}
		*lst = NULL;
	}
}
