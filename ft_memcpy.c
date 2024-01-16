/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martaga2 <martaga2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 19:41:58 by martaga2          #+#    #+#             */
/*   Updated: 2024/01/09 09:52:25 by martaga2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*destine;
	unsigned char	*source;

	destine = (unsigned char *)dst;
	source = (unsigned char *)src;
	if (destine == NULL && source == NULL)
		return (NULL);
	while (n--)
		destine[n] = source[n];
	return (dst);
}
/*
int	main (void)
{
	char	o[15] = "Me";
	char	d[15] = "hola";
	
	size_t	n;
	n = 15; 

	printf("La frase original es: %s\n", o);
	printf("La frase donde vamos a copiar es: %s\n", d);
	ft_memcpy(d, o, n);
	printf("la frase copiada es: %s\n", d);

	char	or[15] = "Me";
	char	ds[15] = "hola";
	

	size_t	l;

	l = 15;

	printf("La frase original es: %s\n", or);
	printf("La frase donde vamos a copiar es: %s\n", ds);
	memcpy(ds, or, l);
	printf("la frase copiada tras la función original es: %s", ds);
	return (0);
}*/