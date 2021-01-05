/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <mavin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/28 15:58:08 by jekim             #+#    #+#             */
/*   Updated: 2020/12/28 17:15:08 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_memchr(const void *src, int c, size_t n)
{
	unsigned char *s;
	unsigned char find;
	
	s = (unsigned char *)src;
	find = c;
	while (n--)
	{
		if (*s != find)
			s++;
		else
			return (s);
	}
	return (0);
}
