/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agiron-f <agiron-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/20 09:46:34 by agiron-f          #+#    #+#             */
/*   Updated: 2026/06/20 14:20:05 by agiron-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
			return ((unsigned char) s1[i] - (unsigned char) s2[i]);
		i++;
	}
	return (0);
}

int	main(void)
{
	char	str1[9];
	char	str2[9];
	int		cmp;

	str2[9] = "Hella 42";
	str1[9] = "Hello 42";
	cmp = ft_strncmp(str1, str2, 0);
	printf("%d\n", cmp);
	return (0);
}
