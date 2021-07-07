/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isoverflow.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 01:12:55 by jekim             #+#    #+#             */
/*   Updated: 2021/07/08 01:13:30 by jekim            ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

int	ft_isoverflow(long long nbr)
{
	if (nbr > INT_MAX)
		return (1);
	else if (nbr < INT_MIN)
		return (-1);
	else
		return (0);
}
