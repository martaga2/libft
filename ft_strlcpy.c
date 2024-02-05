/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martaga2 <martaga2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 13:41:05 by martaga2          #+#    #+#             */
/*   Updated: 2024/01/22 09:21:57 by martaga2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The stpcpy() and strcpy() functions copy the string src to dst (including
     the terminating `\0' character.)

     The stpncpy() and strncpy() functions copy at most len characters from
     src into dst.  If src is less than len characters long, the remainder of
     dst is filled with `\0' characters.  Otherwise, dst is not terminated.

     The source and destination strings should not overlap, as the behavior is
     undefined.

RETURN VALUES
     The strcpy() and strncpy() functions return dst.  The stpcpy() and
     stpncpy() functions return a pointer to the terminating `\0' character of
     dst.  If stpncpy() does not terminate dst with a NUL character, it
     instead returns a pointer to dst[n] (which does not necessarily refer to
     a valid memory location.)
*/

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