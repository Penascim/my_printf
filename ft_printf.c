/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: penascim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 17:13:07 by penascim          #+#    #+#             */
/*   Updated: 2023/12/12 17:43:05 by penascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_fmt(char fmt, va_list ap)
{
	int	count;

	count = 0;
	if (fmt == 'c')
		count += ft_char(va_arg(ap, int));
	else if (fmt == 's')
		count += ft_str(va_arg(ap, char *));
	else if (fmt == 'p')
		count += ft_pointer(va_arg(ap, void *));
	else if (fmt == 'd' || fmt == 'i')
		count += ft_int(va_arg(ap, signed int));
	else if (fmt == 'u')
		count += ft_u(va_arg(ap, unsigned int));
	else if (fmt == 'x')
		count += ft_hex_lower(va_arg(ap, unsigned int));
	else if (fmt == 'X')
		count += ft_hex_upper(va_arg(ap, unsigned int));
	else if (fmt == '%')
		count += write(1, "%", 1);
	return (count);
}

int	ft_printf(const char *fmt, ...)
{
	va_list	ap;
	int		i;
	int		count;

	va_start(ap, fmt);
	i = 0;
	count = 0;
	while (fmt[i])
	{
		if (fmt[i] == '%')
		{
			count += ft_print_fmt(fmt[i + 1], ap);
			i++;
		}
		else
			count += write(1, &fmt[i], 1);
		i++;
	}
	va_end(ap);
	return (count);
}
