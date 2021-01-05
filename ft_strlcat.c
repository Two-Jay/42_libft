/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim </var/mail/jekim>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/28 21:50:23 by jekim             #+#    #+#             */
/*   Updated: 2020/12/29 18:05:03 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t *ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t dst_l;
	size_t src_l;
	size_t ix;

	dst_l = ft_strlen(dst);
	src_l = ft_strlen(src);
	ix = 0;
	if (size < dst_l)
		return (size + src_l);
	if (size > dst_l)
	{
		while (src[ix] && i < (int)(size - dst_l - 1))
		{
			dst[dst_l + ix] = src[ix];
			ix++;
		}
		dst[dst_l + ix] = '\0';
	}
	return (src_l + dst_l);
}
