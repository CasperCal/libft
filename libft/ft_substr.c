/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccaluwe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 15:19:57 by ccaluwe           #+#    #+#             */
/*   Updated: 2021/11/03 15:20:00 by ccaluwe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*Allocates (with malloc(3)) and returns a substring
 from the string ’s’.
 The substring begins at index ’start’ and is of
 maximum size ’len’.*/

static size_t	ft_len(size_t size, size_t len, unsigned int start)
{
	if (size < start)
		len = 0;
	else if (start + len >= size)
		len = size - start;
	return (len);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new;
	size_t	i;
	size_t	j;
	size_t	msize;

	if (!s)
		return (NULL);
	msize = ft_strlen(s);
	len = ft_len(msize, len, start);
	new = (char *)malloc(sizeof(char) * (len + 1));
	if (!new)
		return (NULL);
	i = start;
	j = 0;
	while (i < ft_strlen(s) && j < len)
		new[j++] = s[i++];
	new[j] = '\0';
	return (new);
}
