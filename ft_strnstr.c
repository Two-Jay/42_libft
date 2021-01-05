/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/29 19:39:21 by jekim             #+#    #+#             */
/*   Updated: 2020/12/30 15:58:59 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t n)
{
	size_t len;
	
	len = ft_strlen(little);
	if (!*little || !n || n < len)
		return (0);
	while (*big && len <= n)
	{
		if(!ft_strncmp(big, little, n))
			return ((char *)big);
		big++;
	}
	return (0);
}
