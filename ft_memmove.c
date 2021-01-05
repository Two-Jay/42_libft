/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/26 03:39:13 by jekim             #+#    #+#             */
/*   Updated: 2020/12/28 16:40:01 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char *d;
	unsigned char *s;

	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	if(s < d)
	{
		d += n - 1;
		s += n - 1;
		while (n--)
			*(d--) = *(s--);
	}
	else
	{
		while (n--)
			*(d++) = *(s++);
	}
	return (dst);
}
