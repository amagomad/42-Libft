/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagomad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 01:31:46 by amagomad          #+#    #+#             */
/*   Updated: 2024/04/24 02:42:08 by amagomad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*p_dest;
	const unsigned char	*p_src;

	p_dest = (unsigned char *)dest;
	p_src = (const unsigned char *)src;
	if (p_dest > p_src && p_dest < p_src + n)
	{
		i = n;
		while (i > 0)
		{
			p_dest[i - 1] = p_src[i - 1];
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			p_dest[i] = p_src[i];
			i++;
		}
	}
	return (dest);
}
