/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martaga2 <martaga2@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 12:12:29 by martaga2          #+#    #+#             */
/*   Updated: 2023/11/28 16:13:02 by martaga2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isascii(int c)
{
	while (c >= 0 && c <= 177)
		return (1);
	return (0);
}

int	main(void)
{
	printf("La funcion generada por mí (ej1): %d\n", ft_isascii('0200'));
	printf("La función generada por mí (ej2): %d\n", ft_isascii('0'));
	printf("La función generada por mí (ej3): %d\n", ft_isascii('\0'));
	printf("La función original (ej1): %d\n", isascii ('0200'));
	printf("La función original (ej2): %d\n", isascii ('0'));
	printf("La función original (ej3): %d\n", isascii ('\0'));
	return (0);
}
