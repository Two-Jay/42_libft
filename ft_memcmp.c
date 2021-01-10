/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim </var/mail/jekim>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/28 16:40:26 by jekim             #+#    #+#             */
/*   Updated: 2021/01/06 19:47:11 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *ptr1, const void *ptr2, size_t n)
{
	unsigned char *s1;
	unsigned char *s2;

	s1 = (unsigned char *)ptr1;
	s2 = (unsigned char *)ptr2;
	if ((!ptr1 && !ptr2) || !n)
		return (0);
	while (*s1 == *s2 && n--)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
