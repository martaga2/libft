/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martaga2 <martaga2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 11:36:55 by martaga2          #+#    #+#             */
/*   Updated: 2023/12/26 17:10:21 by martaga2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len;
	size_t	dst_len;
	size_t	src_len;

	src_len = ft_strlen (src);
	dst_len = ft_strlen (dst);
	len = 0;
	if (src[len] == '\0')
		return (dst_len);
	if (dst_len >= dstsize)
		return (dstsize + src_len);
	while (src[len] != '\0' && dst_len + len < dstsize -1)
	{
		dst[dst_len + len] = src [len];
		len++;
	}
	if (dst_len + len < dstsize)
		dst[dst_len + len] = '\0';
	return (dst_len + src_len);
}
/*
{
	size_t	i;
	
	i = 0;
	if (!src)
		return (0);
	while (src[i] && i + 1 < dstsize)
	{
		dst[i] = src[i];
		i++;
	}
	if (dstsize != 0)
		dst[i] = '\0';
	while (src [i])
		i++;
	return (i);
}*/
