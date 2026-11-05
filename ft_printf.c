/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sech-cha <sech-cha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 16:42:27 by sech-cha          #+#    #+#             */
/*   Updated: 2026/11/05 13:21:56 by sech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_get_conversion(char c, va_list *args)
{
	if (c == 'c')
		return (ft_putchar(va_arg(*args, int)));
	else if (c == 's')
		return (ft_putstr(va_arg(*args, char *)));
	else if (c == 'p')
		return (ft_putptr(va_arg(*args, void *)));
	else if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(*args, int)));
	else if (c == 'u')
		return (ft_putunbr(va_arg(*args, unsigned int)));
	else if (c == 'x' || c == 'X')
		return (ft_puthex(va_arg(*args, unsigned int), c));
	else if (c == '%')
		return (ft_putchar('%'));
	return (write(1, "%", 1) + write(1, &c, 1));
}

int	ft_handele_format(const char *format, va_list *args)
{
	int	count;
	int	written;
	int	i;

	i = 0;
	count = 0;
    written = 0;
	while (format[i])
	{
		if (format[i] == '%' && !format[i + 1])
		{
			return (-1);
		}
		else if (format[i] == '%' && format[i + 1])
		{
			i++;
			written = ft_get_conversion(format[i], args);
		}
		else
			written = write(1, &format[i], 1);
        if (written < 0)
            return (-1);
        count += written;
		i++;
	}
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;

	if (!format)
		return (-1);
	count = 0;
	va_start(args, format);
	count += ft_handele_format(format, &args);
	va_end(args);
	return (count);
}
