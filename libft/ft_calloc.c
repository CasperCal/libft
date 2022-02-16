/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccaluwe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 17:21:02 by ccaluwe           #+#    #+#             */
/*   Updated: 2021/11/09 17:21:10 by ccaluwe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*The calloc() function allocates memory for an array
 of nmemb elements of size bytes each
 and returns a pointer to the allocated memory. The memory is set to zero.
 If nmemb or size is 0, then calloc() returns either NULL,
or a unique pointer value that can later be successfully passed to free().
 */

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	tot_size;
	void	*dst;

	tot_size = size * nmemb;
	dst = malloc(tot_size);
	if (!dst)
		return (NULL);
	ft_memset(dst, 0, tot_size);
	return (dst);
}
