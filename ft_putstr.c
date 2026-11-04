/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sech-cha <sech-cha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 16:11:18 by sech-cha          #+#    #+#             */
/*   Updated: 2026/11/04 21:18:26 by sech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int	count;
	int	i;

	if (!s)
		return (write(1, "(null)", 6));
	count = 0;
	i = 0;
	while (s[i])
	{
		count += write(1, &s[i], 1);
		i++;
	}
	return (count);
}
