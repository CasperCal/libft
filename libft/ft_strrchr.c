/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccaluwe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 18:18:04 by ccaluwe           #+#    #+#             */
/*   Updated: 2021/11/09 18:18:07 by ccaluwe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*The strrchr() function returns a pointer to the last occurrence
 of the character c in the string s.*/

char	*ft_strrchr(const char *s, int c)
{
	char	*t;
	int		i;

	t = NULL;
	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			t = (char *)&s[i];
		i++;
	}
	if (c == '\0')
	t = (char *)&s[i];
	return (t);
}
