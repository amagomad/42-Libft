/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagomad <amagomad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 10:08:04 by amagomad          #+#    #+#             */
/*   Updated: 2024/05/03 20:15:25 by amagomad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*final;
	size_t	len1;
	size_t	len2;

	if (!s1)
		len1 = 0;
	else
		len1 = ft_strlen(s1);
	if (!s2)
		len2 = 0;
	else
		len2 = ft_strlen(s2);
	final = malloc(len1 + len2 + 1);
	if (final == NULL)
		return (NULL);
	if (s1)
		ft_strlcpy(final, s1, len1 + 1);
	if (s2)
		ft_strlcat(final + len1, s2, len2 + 1);
	return (final);
}
