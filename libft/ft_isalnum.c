/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agiron-f <agiron-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 13:09:25 by agiron-f          #+#    #+#             */
/*   Updated: 2026/06/28 14:10:29 by agiron-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

// int	main(void)
// {
// 	printf("É alfa-numerico %d\n", ft_isalnum('a'));
// 	printf("É alfa-numerico %d\n", ft_isalnum('A'));
// 	printf("É alfa-numerico %d\n", ft_isalnum('2'));
// 	printf("É alfa-numerico %d\n", ft_isalnum('!'));
// 	printf("É alfa-numerico %d\n", ft_isalnum('$'));
// 	printf("É alfa-numerico %d\n", ft_isalnum(' '));
// 	return (0);
// }
