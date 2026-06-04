/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agiron-f <agiron-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 13:09:35 by agiron-f          #+#    #+#             */
/*   Updated: 2026/06/04 11:30:11 by agiron-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	main(void)
{
	int	numero;

	printf("%d\n", ft_isdigit('8'));
	numero = '8';
	if (ft_isdigit(numero))
		printf("%c é um número.\n", numero);
		
	numero = 'b';
	if (ft_isdigit(numero))
		printf("%c é um número.\n", numero);
	else
		printf("%c não é um número.\n", numero);
		
	return (0);
}
