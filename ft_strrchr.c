/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martaga2 <martaga2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 18:32:52 by martaga2          #+#    #+#             */
/*   Updated: 2024/01/09 09:51:59 by martaga2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = 0;
	while (s[len] != '\0')
		len++;
	while (len >= 0)
	{
		if (s[len] == (char)c)
			return ((char *)(&s[len]));
		len--;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	s[] = "Me llamo Marta";
	char	c = 'l';

	printf("la oración original es: %s\n", s);
	printf("la oración tras pasar la función es: %s\n", ft_strrchr(s, c));

	char	so[] = "Me llamo Marta";
	char	co = 'l';
	
	printf("la oración tras pasar la función original es: %s\n", \
	strrchr(so, co));
	return (0);
}
*/