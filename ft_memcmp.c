/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martaga2 <martaga2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 09:53:06 by martaga2          #+#    #+#             */
/*   Updated: 2024/01/09 09:30:41 by martaga2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (i < n)
	{
		if (str1[i] != str2[i])
		{
			return (str1[i] - str2[i]);
		}
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	*s1;
	char	*s2;
	char	*s1o;
	char	*s2o;

	s1 = "\xff\xaa\xde\xffMACOSX\xff";
	s2 = "\xff\xaa\xde\x02";
	s1o = "\xff\xaa\xde\xffMACOSX\xff";
	s2o = "\xff\xaa\xde\x02";
	printf ("coinciden hasta =%d\n", \
		ft_memcmp(s1, s2, 8));
	printf ("coinciden hasta =%d\n", \
		memcmp(s1o, s2o, 8));
}*/
