/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagomad <amagomad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 03:20:54 by amagomad          #+#    #+#             */
/*   Updated: 2024/05/07 21:11:31 by amagomad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total_size;
	void	*tab;
	char	*cases;
	size_t	i;

	total_size = nmemb * size;
	if (nmemb == 0 || size == 0)
	{
		tab = malloc(0);
		return (tab);
	}
	if ((int)nmemb < 0 || (int)size < 0)
		return (NULL);
	tab = malloc(total_size);
	if (tab == NULL)
		return (NULL);
	cases = (char *)tab;
	i = 0;
	while (i < total_size)
	{
		cases[i] = 0;
		i++;
	}
	return (tab);
}
