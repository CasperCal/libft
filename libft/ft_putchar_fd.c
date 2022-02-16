/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccaluwe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 16:06:47 by ccaluwe           #+#    #+#             */
/*   Updated: 2021/11/03 16:06:50 by ccaluwe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*Outputs the character ’c’ to the given file
 descriptor.*/

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
