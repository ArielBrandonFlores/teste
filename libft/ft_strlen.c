/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agiron-f <agiron-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 13:09:43 by agiron-f          #+#    #+#             */
/*   Updated: 2026/06/04 11:30:31 by agiron-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(char *array)
{
	int	i;

	i = 0;
	while (array[i])
		i++;
	return (i);
}

int	main(void)
{
	printf("%d\n", ft_strlen("42SP"));
	return (0);
}
