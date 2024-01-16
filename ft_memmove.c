/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martaga2 <martaga2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 14:31:04 by martaga2          #+#    #+#             */
/*   Updated: 2024/01/16 12:41:10 by martaga2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*destine;
	const char	*source;

	destine = (char *)dst;
	source = (const char *)src;
	if (!dst && !src)
		return (dst);
	if (destine == source)
		return (dst);
	if (destine > source)
	{
		while (len--)
			destine[len] = source[len];
	}
	else
	{
		while (len--)
			*destine++ = *source++;
	}
	return (dst);
}
/*
int	main(void)
{
	char o[15] = "me";
	char d[15] = "Hola";
	printf("La frase original es: %s\n", o);
    printf("La frase donde vamos a copiar es: %s\n", d);
    ft_memmove(d, o, sizeof(d));
    printf("La frase copiada es: %s\n", d);

	char or[15] = "me";
	char ds[15] = "Hola";
	printf("La frase original es: %s\n", or);
    printf("La frase donde vamos a copiar es: %s\n", ds);
    memmove(ds, or, sizeof(ds));
    printf("La frase copiada, tras función original es: %s\n", ds);
}*/