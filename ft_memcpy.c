/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/26 01:21:35 by jekim             #+#    #+#             */
/*   Updated: 2020/12/28 17:16:30 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char *d;
	unsigned char *s;
	
	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	while (n--)
		*(d++) = *(s++);
	return (dst);
}
