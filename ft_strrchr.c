/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/29 19:25:59 by jekim             #+#    #+#             */
/*   Updated: 2020/12/29 23:27:34 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strrchr(const char *src, int c)
{
	char *temp = (char *)src;

	while (*src++)
		;
	while (--src != start && *src != (char)c)
		src++;
	if (*src == (char)c)
		return ((char *)src);
	return (NULL);
}
