/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagomad <amagomad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 04:35:36 by amagomad          #+#    #+#             */
/*   Updated: 2024/05/12 20:23:07 by amagomad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_len(int n)
{
	unsigned int	i;

	i = 0;
	if (n < 0)
	{
		n = -n;
		i++;
	}
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int				i;
	char			*z;
	long int		a;

	i = ft_len(n);
	z = malloc((i + 1) * sizeof(char));
	if (!z)
		return (NULL);
	a = n;
	if (a < 0)
	{
		a = -a;
		z[0] = '-';
	}
	z[i--] = '\0';
	if (n == 0)
		z[i] = '0';
	while (a != 0)
	{
		z[i--] = '0' + (a % 10);
		a = a / 10;
	}
	return (z);
}
