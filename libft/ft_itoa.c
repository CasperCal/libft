/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccaluwe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 17:28:23 by ccaluwe           #+#    #+#             */
/*   Updated: 2021/11/09 17:28:30 by ccaluwe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 DESCRIPTION:
    Allocates (with malloc(3)) and returns a string representing the
    integer received as an argument. Negative numbers must be handled.
*/

#include "libft.h"

size_t	ft_isize(int n)
{
	size_t	size;

	if (n > 0)
		size = 0;
	else
		size = 1;
	while (n)
	{
		n /= 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	nbr;
	size_t	size;

	nbr = n;
	size = ft_isize(n);
	if (nbr < 0)
		nbr = -nbr;
	str = (char *)malloc(size + 1);
	if (str == NULL)
		return (0);
	*(str + size--) = '\0';
	while (nbr > 0)
	{
		*(str + size--) = nbr % 10 + '0';
		nbr /= 10;
	}
	if (size == 0 && str[1] == '\0')
		*(str + size) = '0';
	else if (size == 0 && str[1] != '\0')
		*(str + size) = '-';
	return (str);
}
