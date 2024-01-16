/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martaga2 <martaga2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 14:05:03 by martaga2          #+#    #+#             */
/*   Updated: 2024/01/08 10:02:30 by martaga2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	while ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}
/*
int	main(void)
{
	printf("La funcion generada por mí (ej1): %d\n", ft_isalpha('a'));
	printf("La función generada por mí (ej2): %d\n", ft_isalpha('0'));
	printf("La función generada por mí (ej3): %d\n", ft_isalpha('.'));
	printf("La función original (ej1): %d\n", isalpha('a'));
	printf("La función original (ej2): %d\n", isalpha ('0'));
	printf("La función original (ej3): %d\n", isalpha ('.'));
	return (0);
}
*/