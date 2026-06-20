/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agiron-f <agiron-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/20 09:48:47 by agiron-f          #+#    #+#             */
/*   Updated: 2026/06/20 09:49:28 by agiron-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char )c)
			return ((char *)(s + i));
		i--;
	}
	return (NULL);
}

int	main(void)
{
	const char	str[8] = "Hello 42";
	int		ch = 'l';

	char	*dest = ft_strrchr(str, ch);
	printf("%s\n", dest);
	return(0);
}
