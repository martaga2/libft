/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martaga2 <martaga2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 09:03:46 by martaga2          #+#    #+#             */
/*   Updated: 2024/01/23 17:41:40 by martaga2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*fn;
	size_t		i;
	size_t		j;

	if (!s1 || !s2)
		return (0);
	fn = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!fn)
		return (NULL);
	i = -1;
	while (s1[++i])
		fn[i] = s1[i];
	j = -1;
	while (s2[++j])
		fn[i + j] = s2[j];
	fn[i + j] = '\0';
	return (fn);
}
/*
int	main(void)
{
	char	*s1;
	char	*s2;
	char	*fn;

	s1 = "Me";
	s2 = "llamo";
	fn = ft_strjoin(s1, s2);
	if (fn)
	{
		printf ("%s\n", fn);
		free(fn);
	}
	return (0);
}
*/