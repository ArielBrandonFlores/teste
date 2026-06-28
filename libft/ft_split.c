/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agiron-f <agiron-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/20 15:38:32 by agiron-f          #+#    #+#             */
/*   Updated: 2026/06/28 14:04:44 by agiron-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_count_words(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (*s)
	{
		if (*s != c)
		{
			len++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	return (len);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	len;
	size_t	i;

	if (!s)
		return (NULL);
	i = 0;
	result = malloc(sizeof (char *) * (ft_count_words(s, c) + 1));
	if (!result)
		return (NULL);
	while (*s)
	{
		if (*s != c)
		{
			len = 0;
			while (*s && *s != c && ++len)
				++s;
			result[i++] = ft_substr(s - len, 0, len);
		}
			++s;
	}
	result[i] = NULL;
	return (result);
}
