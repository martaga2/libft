/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martaga2 <martaga2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 12:56:03 by martaga2          #+#    #+#             */
/*   Updated: 2024/01/09 09:52:20 by martaga2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *pnt, int c, size_t count)
{
	unsigned char	*p;

	p = (unsigned char *)pnt;
	while (count--)
	{
		*p = (unsigned char)c;
		p++;
	}
	return (pnt);
}
/*
int	main(void)
{
	unsigned char	pnt[18] = "Somos ";

	printf("Antes de memset: %s\n", pnt);
	printf("Después de la función memset mía: %s\n", ft_memset(pnt, 'A', 10));
	unsigned char	str[18] = "Somos ";

	printf("Antes de memset: %s\n", str);
	printf("Aplicando la función memset original: %s\n", memset(str, 'A', 10));
	return (0);
}*/