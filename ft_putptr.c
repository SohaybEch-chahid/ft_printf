/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sech-cha <sech-cha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 16:15:14 by sech-cha          #+#    #+#             */
/*   Updated: 2026/11/04 21:20:51 by sech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex(unsigned long nb)
{
	int	count;

	count = 0;
	if (nb > 15)
		count += ft_print_hex(nb / 16);
	count += ft_puthex((unsigned int)(nb % 16), 'x');
	return (count);
}

int	ft_putptr(void *ptr)
{
	int		count;
	size_t	tmp;

	count = 0;
	if (!ptr)
	{
		count += write(1, "(nil)", 5);
		return (count);
	}
	count += write(1, "0x", 2);
	tmp = (size_t)ptr;
	count += ft_print_hex(tmp);
	return (count);
}
