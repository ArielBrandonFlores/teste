/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agiron-f <agiron-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 17:35:06 by agiron-f          #+#    #+#             */
/*   Updated: 2026/06/28 13:48:01 by agiron-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str != (char)c)
	{
		if (*str == '\0')
			return (NULL);
		str++;
	}
	return ((char *)str);
}

// int	main(void)
// {
// 	char	test [5];
// 	int		ch;
// 	char	*result;

// 	test [5] = "Hello";
// 	ch = '\0';
// 	result = ft_strchr(test, ch);
// 	printf("%ṣ\n", result);
// 	return (0);
// }
