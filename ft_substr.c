/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martaga2 <martaga2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 13:29:53 by martaga2          #+#    #+#             */
/*   Updated: 2024/01/29 13:07:51 by martaga2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	size;
	char	*rtn;

	if (!s)
		return (NULL);
	size = ft_strlen(s);
	if (size < start)
	{
		rtn = ft_strdup("");
		return (rtn);
	}
	if ((size - start) < len)
		len = size - start;
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	ft_memcpy(str, s + start, len);
	str[len] = '\0';
	return (str);
}
/*
int	main(void)
{
	char	*str;
	char	*s;
	int		start;
	size_t	len;

	s = "Hola me llamo Marta";
	start = 6;
	len = 4;
	printf("%s\n", ft_substr(s, start, len));
	return (0);
}
*/