/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalnum.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccaluwe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 12:15:41 by ccaluwe           #+#    #+#             */
/*   Updated: 2021/10/01 12:33:55 by ccaluwe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*These functions check whether c,
 which must have the value of an unsigned char or EOF,
 falls into a certain character class (alpha or numeric)
 according to the current locale.*/

int	ft_isalnum(int c)
{
	if (c < '0' || (c > '9' && c < 'A') || (c > 'Z' && c < 'a') || c > 'z')
		return (0);
	return (1);
}
