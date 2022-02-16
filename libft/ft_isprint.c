/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccaluwe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 12:28:53 by ccaluwe           #+#    #+#             */
/*   Updated: 2021/10/01 12:32:55 by ccaluwe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The isprint() function tests for any printing character, including space
 (` ').  The value of the argument must be representable as an unsigned
 char or the value of EOF.*/

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
