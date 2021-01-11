/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 20:09:51 by jekim             #+#    #+#             */
/*   Updated: 2021/01/11 14:51:52 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t src_l;
	size_t ix;

	if (!dst || !src || !dstsize)
		return (0);
	ix = 0;
	src_l = ft_strlen(src);
	while (src[ix] && ix < (dstsize - 1))
	{
		dst[ix] = src[ix];
		ix++;
	}
	dst[ix] = '\0';
	return (src_l);
}
