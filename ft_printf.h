/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: penascim <penascim@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 19:18:33 by penascim          #+#    #+#             */
/*   Updated: 2023/12/12 19:18:35 by penascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *fmt, ...);
int		ft_char(char c);
char	*ft_itoa(int n);
int		ft_int(int d);
int		ft_str(char *s);
char	*ft_utoa_base(unsigned long long n, int base, char *chr);
int		ft_hex_upper(unsigned int x);
int		ft_hex_lower(unsigned int x);
int		ft_pointer(void *p);
int		ft_u(unsigned int u);

#endif
