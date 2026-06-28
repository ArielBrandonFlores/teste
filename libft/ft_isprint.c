/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agiron-f <agiron-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 13:09:38 by agiron-f          #+#    #+#             */
/*   Updated: 2026/06/28 14:10:44 by agiron-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

// int	main(void)
// {
// 	printf("%d\n", ft_isprint(66));
// 	printf("%d\n", ft_isprint(12));
// 	printf("%d\n", ft_isprint(127));
// 	printf("%d\n", ft_isprint(130));
// }
