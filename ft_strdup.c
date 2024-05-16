/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagomad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 07:59:01 by amagomad          #+#    #+#             */
/*   Updated: 2024/04/24 07:59:02 by amagomad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*copy;

	i = ft_strlen((char *)s);
	copy = malloc(sizeof(char) * i + 1);
	if (copy != NULL)
	{
		i = 0;
		while (s[i] != '\0')
		{
			copy[i] = s[i];
			i++;
		}
		copy[i] = '\0';
		return (copy);
	}
	return (NULL);
}
