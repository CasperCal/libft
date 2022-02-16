/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccaluwe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 17:54:36 by ccaluwe           #+#    #+#             */
/*   Updated: 2021/11/09 17:54:41 by ccaluwe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*The memmove() function copies n bytes from memory area src to
 memory area dest.  The memory areas may overlap: copying takes
 place as though the bytes in src are first copied into a
 temporary array that does not overlap src or dest, and the bytes
 are then copied from the temporary array to dest.*/

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (src < dst)
	{
		while (len--)
		{
			((unsigned char *)dst)[len] = ((unsigned char *)src)[len];
		}
	}
	else if (src > dst)
	{
		ft_memcpy(dst, src, len);
	}
	return (dst);
}
