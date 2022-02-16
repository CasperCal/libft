/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccaluwe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 17:18:24 by ccaluwe           #+#    #+#             */
/*   Updated: 2021/11/09 17:18:28 by ccaluwe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*The bzero() function erases the data in the n bytes of the memory
 starting at the location pointed to by s, by writing zeros (bytes
 containing '\0') to that area.*/

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*sub;

	i = 0;
	sub = (unsigned char *)s;
	while (i < n)
	{
		sub[i] = 0;
		i++;
	}
	s = sub;
}
