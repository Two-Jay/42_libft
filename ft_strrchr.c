/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/29 19:25:59 by jekim             #+#    #+#             */
/*   Updated: 2021/01/09 14:53:12 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *src, int c)
{
	unsigned int src_l;
	
	src_l = (unsigned int)ft_strlen(src);
	while (src_l != 0 && src[src_l] != (char)c)
		src_l--;
	if (src[src_l] == (char)c)
		return ((char *)src + src_l);
	return (NULL);
}
