/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: penascim <penascim@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 19:18:19 by penascim          #+#    #+#             */
/*   Updated: 2023/12/12 19:18:21 by penascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	sizenum_base_u(unsigned long long n, int base)
{
	size_t	count;

	count = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		count++;
		n /= base;
	}
	return (count);
}

char	*ft_utoa_base(unsigned long long n, int base, char *chr)
{
	char	*str;
	int		len;

	len = sizenum_base_u(n, base);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	while (len--)
	{
		str[len] = chr[(n % base)];
		n /= base;
	}
	return (str);
}
