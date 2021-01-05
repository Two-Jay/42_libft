/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/01 00:33:17 by jekim             #+#    #+#             */
/*   Updated: 2021/01/01 00:51:31 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strdup(const char *s)
{
	char *ret;
	int len;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	ret = (char *)malloc(len + 1);
	ft_memcpy(ret, s, (len + 1));
	return (ret);
}
