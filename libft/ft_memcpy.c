/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agiron-f <agiron-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 10:36:36 by agiron-f          #+#    #+#             */
/*   Updated: 2026/06/04 13:58:04 by agiron-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*s1;
	unsigned char	*s2;
	size_t			i;

	i = 0;
	s1 = (unsigned char *)src;
	s2 = (unsigned char *)dest;

	while (i < n)
	{
		s2[i] = s1[i];
		i++;
	}
	return (dest);
}

int main (void)
{
	char dest [5] = " ";
	char src [5] = "Hello";

	printf("%s\n",src);
	printf("%s\n",dest);
	ft_memcpy(dest, src, 2);
	printf("%s\n",src);
	printf("%s\n",dest);
	return (0);
}
