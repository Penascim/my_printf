/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: penascim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 17:12:49 by penascim          #+#    #+#             */
/*   Updated: 2023/12/06 18:04:56 by penascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	*ft_bzero(void *s, size_t n)
{
	char	*stemp;

	stemp = s;
	while (n)
	{
		stemp[n - 1] = '\0';
		n--;
	}
	return (s);
}

static void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*str;

	str = malloc(nmemb * size);
	if (!str)
		return (NULL);
	ft_bzero(str, (nmemb * size));
	return (str);
}

static size_t	ft_count_numbers(long n)
{
	size_t	count;

	count = 0;
	if (n < 0)
	{
		n *= -1;
		count++;
	}
	else if (n == 0)
		return (1);
	while (n > 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

static void	*ft_put_nbr_in_str(long nb, char *result, int i)
{
	if (nb < 0)
	{
		nb *= -1;
		result[0] = '-';
	}
	while (nb > 9)
	{
		result[i--] = (nb % 10) + 48;
		nb = nb / 10;
	}
	result[i] = nb + 48;
	return (result);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	nb;
	size_t	str_index;

	nb = (long)n;
	str_index = ft_count_numbers(nb);
	str = ft_calloc(sizeof(char), str_index + 1);
	if (!str)
		return (NULL);
	ft_put_nbr_in_str(nb, str, str_index - 1);
	return (str);
}
