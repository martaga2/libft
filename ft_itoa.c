/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martaga2 <martaga2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 14:05:48 by martaga2          #+#    #+#             */
/*   Updated: 2024/02/05 10:19:46 by martaga2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(long n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		len++;
		n = -n;
	}
	while (n != 0)
	{
		n = n / 10;
		len ++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	long	tmp;
	char	*a;

	tmp = n;
	len = ft_intlen(tmp);
	a = malloc(sizeof(char) * (len + 1));
	if (!a)
		return (NULL);
	a[len] = '\0';
	len = len -1;
	if (tmp == 0)
		a[0] = '0';
	if (tmp < 0)
	{
		a[0] = '-';
		tmp = -tmp;
	}
	while (tmp > 0)
	{
		a[len] = (tmp % 10) + '0';
		tmp /= 10;
		len--;
	}
	return (a);
}
