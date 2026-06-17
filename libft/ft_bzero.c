/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agiron-f <agiron-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 13:21:51 by agiron-f          #+#    #+#             */
/*   Updated: 2026/06/04 11:26:00 by agiron-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *src, size_t n)
{
	unsigned char	*dst;

	dst = (unsigned char *) src;
	while (n--)
		dst[n] = 0;
}

int	main(void)
{
	char	src[15] = "Hello, World!!";
	ft_bzero(src, 3);
	printf("%s\n", src);
	return (0);
}
