/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccaluwe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 10:43:23 by ccaluwe           #+#    #+#             */
/*   Updated: 2021/09/09 10:43:25 by ccaluwe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*The strcmp() function compares
 the two strings s1 and s2.
 It returns an integer less than, equal to,
or greater than zero if s1 is found, respectively,
to be less than, to match, or be greater than s2.
The strncmp() function is similar,
 except it only compares the first (at most) n bytes of s1 and s2.*/

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if ((*s1 == '\0' || *s2 == '\0') && n == 0)
		return (0);
	else if (*s1 == '\0' || *s2 == '\0')
		return ((unsigned char)*s1 - (unsigned char)*s2);
	while ((s1[i] || s2[i]) && (i < n))
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
