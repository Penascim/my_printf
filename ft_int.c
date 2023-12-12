/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: penascim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 17:12:18 by penascim          #+#    #+#             */
/*   Updated: 2023/12/12 17:02:26 by penascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_int(int d)
{
	char	*tempd;
	int		i;

	tempd = ft_itoa(d);
	i = ft_str(tempd);
	free(tempd);
	return (i);
}
/*
int main(void)
{
    int i;
    i = -12131231345223;

    ft_int(i);
}
*/
