/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martaga2 <martaga2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 17:55:43 by martaga2          #+#    #+#             */
/*   Updated: 2024/01/08 10:02:12 by martaga2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*source;

	source = (unsigned char *)s;
	while (n--)
	{
		*source = (unsigned char) '\0';
		source++;
	}
}
/*
int	main(void)
{
	unsigned char	source[18] = "estamosdepuente";

	printf("Antes de bzero: %s\n", source);

	ft_bzero(source+3, 10);

	printf("Después de la función bzero mía: %s\n", source);
	
	unsigned char	src[18] = "estamosdepuente";

	printf("Antes de bzero: %s\n", src);

	bzero(src+3, 10);

	printf("Aplicando la función bzero original: %s\n", src);
	return (0);
}*/