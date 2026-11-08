/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sech-cha <sech-cha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 15:53:06 by sech-cha          #+#    #+#             */
/*   Updated: 2026/11/04 21:22:16 by sech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned int nb, char c)
{
	int		count;
	char	*s;

	if (c == 'x')
		s = "0123456789abcdef";
	else
		s = "0123456789ABCDEF";
	count = 0;
	if (nb >= 16)
	{
		count += ft_puthex(nb / 16, c);
	}
	count += write(1, &s[nb % 16], 1);
	return (count);
}
