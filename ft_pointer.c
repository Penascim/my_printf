/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: penascim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 17:12:57 by penascim          #+#    #+#             */
/*   Updated: 2023/12/12 17:11:12 by penascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pointer(void *p)
{
	int					i;
	char				*tp;
	unsigned long long	tmp;

	tmp = (unsigned long long)p;
	if (tmp == 0)
		return (ft_str("(nil)"));
	i = 0;
	tp = ft_utoa_base(tmp, 16, "0123456789abcdef");
	i += ft_str("0x");
	i += ft_str(tp);
	free(tp);
	return (i);
}
