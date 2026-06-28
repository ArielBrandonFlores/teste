/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agiron-f <agiron-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 13:09:32 by agiron-f          #+#    #+#             */
/*   Updated: 2026/06/28 14:10:35 by agiron-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

// int	main(void)
// {
// 	printf("%d\n", ft_isascii(12));
// 	printf("%d\n", ft_isascii(66));
// 	printf("%d\n", ft_isascii(127));
// 	printf("%d\n", ft_isascii(130));
// }
