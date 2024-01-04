/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: penascim <penascim@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 19:17:17 by penascim          #+#    #+#             */
/*   Updated: 2023/12/12 19:17:21 by penascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hex_lower(unsigned int x)
{
	int		i;
	char	*tx;

	tx = ft_utoa_base(x, 16, "0123456789abcdef");
	i = ft_str(tx);
	free(tx);
	return (i);
}

int	ft_hex_upper(unsigned int x)
{
	int		i;
	char	*tx;

	tx = ft_utoa_base(x, 16, "0123456789ABCDEF");
	i = ft_str(tx);
	free(tx);
	return (i);
}
