/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagomad <amagomad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 21:08:10 by amagomad          #+#    #+#             */
/*   Updated: 2024/04/30 19:25:56 by amagomad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*final;
	int		start;
	int		end;

	if (!s1)
		return (NULL);
	start = 0;
	end = ft_strlen(s1) - 1;
	if (!set)
		return (ft_strdup(s1));
	while (start <= end && ft_strchr(set, s1[start]))
		start++;
	if (start > end)
		return (ft_strdup(s1 + end + 1));
	while (ft_strchr(set, s1[end]) && end >= 0)
		end--;
	final = malloc(end - start + 2);
	if (final == NULL)
		return (NULL);
	ft_strlcpy(final, &s1[start], end - start + 2);
	return (final);
}
