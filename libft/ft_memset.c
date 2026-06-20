/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agiron-f <agiron-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 13:09:21 by agiron-f          #+#    #+#             */
/*   Updated: 2026/06/20 14:15:59 by agiron-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*dst;

	dst = (unsigned char *) s;
	while (n--)
		dst[n] = c;
	return (s);
}

int	main(void)
{
	char	src[15];

	src[15] = "Hello, World!!";
	ft_memset(src, 'a', 3);
	printf("%s\n", src);
	return (0);
}
