/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sech-cha <sech-cha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 21:00:55 by sech-cha          #+#    #+#             */
/*   Updated: 2026/11/04 21:24:21 by sech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunbr(unsigned int nb)
{
	int	count;

	count = 0;
	if (nb > 9)
	{
		count += ft_putunbr(nb / 10);
	}
	count += ft_putchar('0' + (nb % 10));
	return (count);
}
