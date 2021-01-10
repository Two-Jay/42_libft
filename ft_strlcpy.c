/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 20:09:51 by jekim             #+#    #+#             */
/*   Updated: 2021/01/07 08:45:16 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t src_l;
	size_t ix;

	src_l = (int)ft_strlen(src);
	ix = 0;
	if (!dstsize)
		return (0);
	src_l = 0;
	while (src[src_l])
	{
		src_l++;
	}
	ix = 0;
	while (src[ix] && ix < (dstsize - 1))
	{
		dst[ix] = src[ix];
		ix++;
	}
	dst[ix] = '\0';
	return (src_l);
}
