/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccaluwe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 11:19:54 by ccaluwe           #+#    #+#             */
/*   Updated: 2021/11/09 15:52:47 by ccaluwe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*convert a string to an integer*/

static int	ft_forward(char *str, int *signe, int *neg)
{
	int	i;

	i = 0;
	*neg = 1;
	*signe = 0;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			*neg = -1;
		i++;
		*signe += 1;
	}
	return (i);
}

int	ft_atoi(const char *str)
{
	int					i;
	int					signe;
	int					neg;
	unsigned long long	res;
	char				*forward;

	forward = (char *)str;
	res = 0;
	i = ft_forward(forward, &signe, &neg);
	if (signe > 1)
		return (0);
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		res *= 10;
		res += str[i] - '0';
		i++;
	}
	if (neg == -1 && res - 1 > 9223372036854775807)
		return (0);
	if (neg == 1 && res > 9223372036854775807)
		return (-1);
	return (res * neg);
}
