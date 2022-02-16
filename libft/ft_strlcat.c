/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccaluwe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 10:44:17 by ccaluwe           #+#    #+#             */
/*   Updated: 2021/09/11 10:44:19 by ccaluwe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*The strlcat() function appends
the NUL-terminated string src to the end of dst.
It will append at most size - strlen(dst)
 - 1 bytes, NUL-terminating the result.*/

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	src_len;
	size_t	dst_len;

	j = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i = dst_len;
	if (dstsize == 0)
		return (src_len);
	if (dstsize < dst_len)
		return (src_len + dstsize);
	else
	{
		while (src[j] && (dst_len + j) < dstsize)
			dst[i++] = src[j++];
		if ((dst_len + j) == dstsize && dst_len < dstsize)
			dst[--i] = '\0';
		else
			dst[i] = '\0';
		return (src_len + dst_len);
	}
}

//#include <stdio.h>
//#include <string.h>
//
//int				main(void)
//{
//	char	*str_base;
//	char	dest[100];
//	char	dest2[100];
//	char	*src;
//	int		index;
//
//	str_base = "Hello";
//	src = " World";
//	index = 0;
//	while (index < 6)
//	{
//		dest[index] = str_base[index];
//		dest2[index] = str_base[index];
//		index++;
//	}
//
//	printf("ft : (%d) $%s$\n", ft_strlcat(dest2, src, 8), dest2);
//}
