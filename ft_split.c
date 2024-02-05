/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martaga2 <martaga2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 17:09:29 by martaga2          #+#    #+#             */
/*   Updated: 2024/01/30 15:15:51 by martaga2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countwords(char const *s, char c)
{
	int	i;
	int	iw;

	i = 0;
	iw = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			iw++;
		i++;
	}
	return (iw);
}

static int	ft_countletter(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
		i++;
	return (i);
}

static char	**ft_fillstr(char const *s, char c, char **str)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	while (s[i] != 0)
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
		{
			k = 0;
			str[j] = malloc (sizeof(char) * (ft_countletter(&s[i], c) + 1));
			if (!str[j])
				return (NULL);
			while (s[i] != c && s[i])
				str[j][k++] = s[i++];
			str[j++][k] = '\0';
		}
	}
	str[j] = NULL;
	return (str);
}

void	ft_free(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}

char	**ft_split(char const *s, char c)
{
	char	**str;

	str = malloc(sizeof(char *) * (ft_countwords(s, c) + 1));
	if (!str)
		return (NULL);
	str = ft_fillstr(s, c, str);
	return (str);
}
/*
int	main(void)
{
	char	*s;
	char	c;
	char	**words;
	int		i;

	s = "Me llamo Marta";
	c = ' ';
	words = ft_split(s, c);
	i = 0;
	while (words[i] != NULL)
	{
		printf ("%s\n", words[i]);
		i++;
	}
	return (0);
}*/
