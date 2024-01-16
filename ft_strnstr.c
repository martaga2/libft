/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martaga2 <martaga2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 09:32:25 by martaga2          #+#    #+#             */
/*   Updated: 2024/01/15 16:18:44 by martaga2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The strnstr() function locates the first occurrence of the null-termi-
nated string needle in the string haystack, where not more than len char-
acters are searched.  Characters that appear after a `\0' character are
not searched.  Since the strnstr() function is a FreeBSD specific API, it
 should only be used when portability is not a concern.*/

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (needle[0] == '\0')
		return ((char *)haystack);
	i = 0;
	while (haystack[i] != '\0')
	{
		j = 0;
		while (haystack[i + j] == needle[j] && i + j < len)
		{
			if (!needle[j + 1])
				return ((char *)&haystack[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	const char	*haystack	= "MZIRIBMZIRIBMZE123";
	const char	*needle		= "MZIRIBMZE";
	size_t	len				= 15;
	char	*result			= ft_strnstr(haystack, needle, len);
	char	*result1		= strnstr(haystack, needle, len);

	if (result)
		printf("La cadena '%s' fue encontrada en '%s' dentro de los primeros \
 %zu caracteres en %p.\n", needle, haystack, len);
	else
		printf("La cadena '%s' no fue encontrada en '%s' dentro de los primeros\
 %zu caracteres en %p.\n", needle, haystack, len);
	if (result1)
		printf("La cadena '%s', con la fn original, fue encontrada en '%s'\
dentro de los primeros %zu caracteres en %p.\n", needle, haystack, len);
	else
		printf("La cadena '%s', con la fn original, no fue encontrada en '%s'\
dentro de los primeros %zu caracteres en %p.\n", needle, haystack, len);
}
*/