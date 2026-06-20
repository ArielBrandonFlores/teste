/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agiron-f <agiron-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/20 10:34:23 by agiron-f          #+#    #+#             */
/*   Updated: 2026/06/20 10:34:51 by agiron-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *) s;
	while (n > i)
	{
		if (str[i] == (unsigned char) c)
			return ((void *)(str + i));
		i++;
	}
	return (NULL);
}

int	main(void)
{
	char *teste = ft_memchr("Hello42",'l', 8);
	printf("%s\n",teste);
	printf("%c\n",*teste);
	printf("%c\n",teste[3]);
	return (0);
}
