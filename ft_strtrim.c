/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martaga2 <martaga2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 16:36:50 by martaga2          #+#    #+#             */
/*   Updated: 2024/01/29 13:07:47 by martaga2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ft_search(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*fn;
	size_t	start;
	size_t	end;
	size_t	i;

	i = 0;
	start = 0;
	while (s1[start] && ft_search(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_search(s1[end - 1], set))
		end--;
	fn = (char *)malloc(sizeof(*s1) * (end - start + 1));
	if (!fn)
		return (0);
	while (end > start)
		fn[i++] = s1[start++];
	fn[i] = '\0';
	return (fn);
}
/*
int	main(void)
{
	char	*str;

	str = "soy una estudiante yo";
	printf("%s\n", ft_strtrim(str, "soy"));
	return (0);
}*/
