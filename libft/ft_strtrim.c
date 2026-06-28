/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agiron-f <agiron-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/28 13:51:28 by agiron-f          #+#    #+#             */
/*   Updated: 2026/06/28 13:59:44 by agiron-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isset(char const *set, char c)
{
	while (*set && c != *set)
		set++;
	return (c == *set);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*begin;
	char	*end;

	if (!s1 ||!set)
		return (NULL);
	begin = (char *)s1;
	end = begin + ft_strlen(s1);
	while (*begin && ft_isset(set, *begin))
		++begin;
	while (begin < end && ft_isset(set, *(end - 1)))
		--end;
	end = ft_substr(begin, 0, end - begin);
	return (end);
}
