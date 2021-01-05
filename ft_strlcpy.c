/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim </var/mail/jekim>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/28 17:18:24 by jekim             #+#    #+#             */
/*   Updated: 2020/12/28 18:55:50 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t src_l;
	size_t ix;

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
		*dst[ix] = *src[ix];
		ix++;
	}
	dst[ix] = '\0';
	return (str_l);
}
