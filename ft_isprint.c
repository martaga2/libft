/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martaga2 <martaga2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 12:31:03 by martaga2          #+#    #+#             */
/*   Updated: 2024/01/08 10:03:07 by martaga2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	while (c >= 32 && c <= 126)
		return (1);
	return (0);
}
/*
int	main(void)
{
	printf("La funcion generada por mí (ej1): %d\n", ft_isprint('0200'));
	printf("La función generada por mí (ej2): %d\n", ft_isprint('0'));
	printf("La función generada por mí (ej3): %d\n", ft_isprint(' '));
	printf("La función original (ej1): %d\n", isprint ('0200'));
	printf("La función original (ej2): %d\n", isprint ('0'));
	printf("La función original (ej3): %d\n", isprint (' '));
	return (0);
}*/
