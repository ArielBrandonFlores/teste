/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agiron-f <agiron-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/20 11:49:59 by agiron-f          #+#    #+#             */
/*   Updated: 2026/06/20 13:27:57 by agiron-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	int		size1;
	int		size2;
	int		i;

	i = 0;
	size1 = ft_strlen(s1);
	size2 = ft_strlen(s2);
	dest = malloc(sizeof(char) * (size1 + size2 + 1));
	if (!dest)
		return (NULL);
	while (*s1)
	{
		dest[i] = *s1;
		s1++;
		i++;
	}
	while (*s2)
	{
		dest[i] = *s2;
		s2++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
