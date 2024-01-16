/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martaga2 <martaga2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 18:10:24 by martaga2          #+#    #+#             */
/*   Updated: 2024/01/09 09:55:16 by martaga2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] && s2[i] && s1[i] == s2[i] && n > 1)
	{
		i++;
		n--;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
int	main(void)
{
	char	*s1;
	char	*s2;
	char	*s1o;
	char	*s2o;

	s1o = "a/cdefgh";
	s2o = "abcdwxyz";
	s1 = "a/cdefgh";
	s2 = "abcdwxyz";
	printf("La función despues de pasar el programa es:%d\n", \
	ft_strncmp(s1, s2, 4));
	printf("La función despues de pasar el programa es:%d\n", \
	strncmp(s1o, s2o, 4));
	return (0);
}*/
