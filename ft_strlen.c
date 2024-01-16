/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martaga2 <martaga2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 14:33:20 by martaga2          #+#    #+#             */
/*   Updated: 2024/01/09 09:52:12 by martaga2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*
int	main(void)
{
	const char	*s = "Somos estudiantes del 42";

	printf("según mi función la longitud del string es: %d\n", ft_strlen(s));
	printf("según la función original, la longitud del string es: %lu\n",
		strlen(s));
	return (0);
}*/
