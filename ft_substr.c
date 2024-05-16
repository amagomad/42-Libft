/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagomad <amagomad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 08:17:37 by amagomad          #+#    #+#             */
/*   Updated: 2024/05/07 14:14:20 by amagomad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*z;
	size_t	s_len;
	size_t	i;
	size_t	j;

	if (!s)
		return (0);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	if (start + len > s_len)
		len = s_len - start;
	z = malloc(sizeof(char) * (len + 1));
	i = start;
	j = 0;
	while (j < len && i < ft_strlen(s))
	{
		z[j] = s[i];
		j++;
		i++;
	}
	z[j] = '\0';
	return (z);
}
