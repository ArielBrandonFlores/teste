/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agiron-f <agiron-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/27 16:57:10 by agiron-f          #+#    #+#             */
/*   Updated: 2026/06/28 12:05:53 by agiron-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_getlen(long nbr)
{
	int	len;

	if (nbr == 0)
		return (1);
	len = 0;
	while (nbr != 0)
	{
		nbr = nbr / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	nbr;
	int		len;

	nbr = n;
	len = ft_getlen(nbr);
	if (n < 0)
		len++;
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (n < 0)
	{
		str[0] = '-';
		nbr = -nbr;
	}
	if (nbr == 0)
		str[0] = '0';
	while (len > (n < 0))
	{
		str[--len] = nbr % 10 + '0';
		nbr /= 10;
	}
	return (str);
}
