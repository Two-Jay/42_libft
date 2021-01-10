/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/26 00:30:31 by jekim             #+#    #+#             */
/*   Updated: 2021/01/11 01:49:17 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *src)
{
	const char *tmp;

	tmp = src;
	if (!src)
		return (NULL);
	while (*tmp++)
		;
	return (size_t)(tmp - src - 1);
}
