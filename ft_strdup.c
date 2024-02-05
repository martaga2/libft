/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martaga2 <martaga2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 08:27:47 by martaga2          #+#    #+#             */
/*   Updated: 2024/01/17 14:37:30 by martaga2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The strdup() function allocates sufficient memory for a copy of the
     string s1, does the copy, and returns a pointer to it.  The pointer may
     subsequently be used as an argument to the function free(3).

     If insufficient memory is available, NULL is returned and errno is set to
     ENOMEM.

     The strndup() function copies at most n characters from the string s1
     always NUL terminating the copied string.
*/

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		count;
	char	*s2;

	count = ft_strlen(s1) + 1;
	s2 = (char *)malloc(count * sizeof(char));
	if (!s2)
		return (NULL);
	ft_strlcpy(s2, s1, count);
	return (s2);
}
/*
int	main(void)
{
	void	*s1;

	s1 = "me llamo marta";
	printf ("Con la función original = %p\n", strdup(s1));
	printf ("Con mi función = %p\n", ft_strdup(s1));
	return (0);
}
*/