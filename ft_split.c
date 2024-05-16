/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagomad <amagomad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 17:13:03 by amagomad          #+#    #+#             */
/*   Updated: 2024/05/11 21:33:15 by amagomad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_length(const char *s, char c)
{
	size_t	length;

	length = 0;
	while (*s != '\0')
	{
		if (*s != c)
		{
			length++;
			while (*s != '\0' && *s != c)
				s++;
		}
		else
			s++;
	}
	return (length);
}

char	**ft_split(const char *s, char c)
{
	char	**final;
	size_t	len;
	int		i;

	if (!s)
		return (NULL);
	final = malloc(sizeof(char *) * (ft_length(s, c) + 1));
	if (!final)
		return (NULL);
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			len = 0;
			while (*(s + len) && *(s + len) != c)
				len++;
			final[i++] = ft_substr(s, 0, len);
			s += len;
		}
		else
			s++;
	}
	final[i] = NULL;
	return (final);
}
