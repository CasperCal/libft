/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccaluwe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 17:38:57 by ccaluwe           #+#    #+#             */
/*   Updated: 2021/11/09 17:39:02 by ccaluwe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* The memccpy() function copies no more than n bytes from memory
 area src to memory area dest, stopping when the character c is
 found.
 If the memory areas overlap, the results are undefined.
 The memccpy() function returns a pointer to the next character in
 dest after c, or NULL if c was not found in the first n
 characters of src*/

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	i;

	i = 0;
	if (!dst && !src)
		return (0);
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		if ((unsigned char)c == ((unsigned char *)src)[i])
			return (dst + i + 1);
		i++;
	}
	return (0);
}
