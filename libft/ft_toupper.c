/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccaluwe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 15:54:29 by ccaluwe           #+#    #+#             */
/*   Updated: 2021/11/03 15:54:35 by ccaluwe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*toupper() converts the letter c to upper case, if possible.*/

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}
