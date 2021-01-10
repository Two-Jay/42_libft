/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 05:39:20 by jekim             #+#    #+#             */
/*   Updated: 2021/01/08 11:13:00 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(const char *s1, const char *s2)
{
	char *ret;
	unsigned int s1_l;
	unsigned int s2_l;
	
	if (!s1 || !s2 )
		return (NULL);
	s1_l = ft_strlen(s1);
	s2_l = ft_strlen(s2);
	if (!(ret = (char *)malloc(s1_l + s2_l + 1)))
		return (NULL);
	while (*s1)
		*(ret++) = *(s1++);
	while (*s2)
		*(ret++) = *(s2++);
	*ret = '\0';
	return (ret);
}
