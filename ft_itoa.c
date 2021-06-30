/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 21:31:47 by jekim             #+#    #+#             */
/*   Updated: 2021/06/30 22:59:59 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(int nbr)
{
	int	len;

	len = 0;
	if (nbr < 0)
	{
		nbr = nbr * -1;
		len++;
	}
	while (nbr > 0)
	{
		nbr = nbr / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*ret;
	int		ix;

	ix = ft_intlen(n);
	ret = (char *)malloc(sizeof(char) * (ix + 1));
	if (!ret)
		return (NULL);
	ret[ix--] = '\0';
	if (n == 0)
	{
		*ret = '0';
		return (ret);
	}
	if (n < 0)
	{
		*ret = '-';
		n = n * -1;
	}
	while (n > 0)
	{
		*(ret + ix--) = '0' + (n % 10);
		n = n / 10;
	}
	return (ret);
}
