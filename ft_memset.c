/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 19:59:22 by jekim             #+#    #+#             */
/*   Updated: 2021/01/11 02:07:36 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memset(void *dst, int c, size_t n)
{
	unsigned char *temp;
	unsigned char value;

	if (!dst)
		return (NULL);
	temp = dst;
	value = c;
	while (n--)
	{
		*(temp++) = value;
	}
	return ((void *)dst);
}
