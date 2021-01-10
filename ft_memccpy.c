/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 17:56:03 by jekim             #+#    #+#             */
/*   Updated: 2021/01/11 01:55:46 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char *d;
	unsigned char *s;
	unsigned char find;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	find = c;
	if (!dst && !src)
		return (NULL);
	while (n--)
	{
		*d++ = *s++;
		if (*s == find)
			return (d + 1);
	}
	return (0);
}
