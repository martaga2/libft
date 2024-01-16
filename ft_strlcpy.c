/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martaga2 <martaga2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 13:41:05 by martaga2          #+#    #+#             */
/*   Updated: 2024/01/12 08:29:45 by martaga2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	len;

	len = 0;
	if (dstsize > 0)
	{
		while (len < dstsize -1 && src[len] != '\0')
		{
			dst[len] = src[len];
			len++;
		}
		dst[len] = '\0';
	}
	return (ft_strlen(src));
}
/*
int	main (void)
{
	const char	o[15] = "Me";
	char	d[15] = "hola";
	
	size_t	n;
	n = 15; 

	printf("La frase original es: %s\n", o);
	printf("La frase donde vamos a copiar es: %s\n", d);
	ft_strlcpy(d, o, n);
	printf("la frase copiada es: %s\n", d);

	char	or[15] = "Me";
	char	ds[15] = "hola";
	

	size_t	l;

	l = 15;

	printf("La frase original es: %s\n", or);
	printf("La frase donde vamos a copiar es: %s\n", ds);
	strlcpy(ds, or, l);
	printf("la frase copiada tras la función original es: %s", ds);
	return (ft_strlen(o));
}*/