/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 21:45:10 by jekim             #+#    #+#             */
/*   Updated: 2021/01/06 20:50:52 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspace(char ch)
{
	return (ch == ' ' || ch == '\t' || ch == '\n' || ch == '\v'
			|| ch == '\f' || ch == '\r');
}

int	ft_atoi(const char *nptr)
{
	int nbr;
	int sign;
	int ix;

	nbr = 0;
	ix = 0;
	sign = 1;
	while (nptr[ix] && ft_isspace(nptr[ix]))
		ix++;
	if (nptr[ix] == '-')
		sign = -1;
	if (nptr[ix] == '-' || nptr[ix] == '+')
		ix++;
	while (nptr[ix] && (0 <= nptr[ix]) && (nptr[ix] <= 9))
	{
		nbr = (nbr * 10) + (nptr[ix] - '0');
		ix++;
	}
	return (sign * nbr);
}
