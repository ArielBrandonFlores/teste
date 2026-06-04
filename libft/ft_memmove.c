/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agiron-f <agiron-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 11:34:29 by agiron-f          #+#    #+#             */
/*   Updated: 2026/06/04 13:59:25 by agiron-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d;
	unsigned char		*s;

	d = (unsigned char *) dest;
	s = (unsigned char *) src;
	if (s == d || n == 0)
		return (d);

	if (d > s)
	{
        i = n;
		while (i > 0)
		{
			d[i - 1] = s[i - 1];
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}

int	main(void)
{
	const char	*src = "Hello World";
	char		dest[12];

	ft_memmove(dest, src, 6);
    printf("%s\n", dest);
	return (0);
}
