/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martaga2 <martaga2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 13:52:35 by martaga2          #+#    #+#             */
/*   Updated: 2024/01/16 14:22:58 by martaga2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The malloc(), calloc(), valloc(), realloc(), and reallocf() functions
     allocate memory.  The allocated memory is aligned such that it can be
     used for any data type, including AltiVec- and SSE-related types.  The
     aligned_alloc() function allocates memory with the requested alignment.
     The free() function frees allocations that were created via the preceding
     allocation functions.

     The malloc() function allocates size bytes of memory and returns a
     pointer to the allocated memory.
	 */
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = (void *)malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}
/*
int	main(void)
{
	char	*puntero;

	puntero = "Hola";
	printf("%p", ft_calloc(4, 17));
	return (0);
}
*/