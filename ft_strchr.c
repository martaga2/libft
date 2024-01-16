/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martaga2 <martaga2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 18:00:27 by martaga2          #+#    #+#             */
/*   Updated: 2024/01/09 09:52:18 by martaga2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}*/

char	*ft_strchr(const char *s, int c)
{
	int	len;

	len = 0;
	while (s[len] != '\0')
	{
		if (s[len] == (char)c)
			return ((char *)(&s[len]));
		len++;
	}
	if ((char)c == '\0')
		return ((char *)&s[len]);
	return (NULL);
}
/*
int	main(void)
{
	char	s[] = "Me llamo Marta";
	char	c = 'l';

	printf("la oración original es: %s\n", s);
	printf("la oración tras pasar la función es: %s\n", ft_strchr(s, c));

	char	so[] = "Me llamo Marta";
	char	co = 'l';
	
	printf("la oración tras pasar la función original es: %s\n", strchr(so, co));
	return (0);
}
*/