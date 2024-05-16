/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagomad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 03:50:27 by amagomad          #+#    #+#             */
/*   Updated: 2024/04/24 03:51:12 by amagomad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*c1;
	const unsigned char	*c2;

	i = 0;
	c1 = (const unsigned char *)s1;
	c2 = (const unsigned char *)s2;
	while (i < n)
	{
		if (c1[i] != c2[i])
		{
			if (c1[i] > c2[i])
				return (1);
			else
				return (-1);
		}
		i++;
	}
	return (0);
}
