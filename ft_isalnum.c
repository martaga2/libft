/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martaga2 <martaga2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 12:04:47 by martaga2          #+#    #+#             */
/*   Updated: 2023/12/26 18:12:33 by martaga2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	while ((c >= 65 && c <= 90) || (c >= 97 && c <= 122)
		|| (c >= 48 && c <= 57))
		return (1);
	return (0);
}
/*
int	main(void)
{
	printf("La funcion generada por mí (ej1): %d\n", ft_isalnum('a'));
	printf("La función generada por mí (ej2): %d\n", ft_isalnum('0'));
	printf("La función generada por mí (ej3): %d\n", ft_isalnum('A'));
	printf("La función original (ej1): %d\n", isalnum ('a'));
	printf("La función original (ej2): %d\n", isalnum ('0'));
	printf("La función original (ej3): %d\n", isalnum ('A'));
	return (0);
}
*/