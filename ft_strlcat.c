/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagomad <amagomad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 06:42:47 by amagomad          #+#    #+#             */
/*   Updated: 2024/04/30 19:20:14 by amagomad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	total_len;
	size_t	copy_nb;
	size_t	i;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	total_len = dest_len + src_len;
	copy_nb = size - dest_len - 1;
	i = 0;
	if (size <= dest_len)
		return (size + src_len);
	while (src[i] != '\0' && i < copy_nb)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (total_len);
}
