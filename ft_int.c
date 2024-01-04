/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: penascim <penascim@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 19:17:34 by penascim          #+#    #+#             */
/*   Updated: 2023/12/12 19:17:36 by penascim         ###   ########.fr       */
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
