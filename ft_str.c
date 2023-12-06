/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: penascim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 17:13:33 by penascim          #+#    #+#             */
/*   Updated: 2023/12/06 17:16:57 by penascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_str(char *s)
{
    unsigned int    i;

    i = 0;
    if (!s)
        s = "(null)";
    while (s[i])
        write(1, &s[i++], 1);
    return (i);
}
/*
int main(void)
{
    char    *str = "flamengo";
    ft_str(str);
}
*/