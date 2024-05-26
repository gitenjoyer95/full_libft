/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_unsig.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkarhu <jkarhu@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 15:00:15 by jkarhu            #+#    #+#             */
/*   Updated: 2024/05/16 12:15:43 by jkarhu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int static	p_posnum(unsigned int n)
{
	int	error;

	error = 0;
	if (n > 9)
	{
		error = p_posnum(n / 10);
		if (error == -1)
			return (error);
	}
	if (p_char(n % 10 + '0') == -1)
		return (-1);
	return (0);
}

int	p_unsig(unsigned int n)
{
	int	len;

	len = 0;
	if (n < 0)
		n = ~n + 1;
	if (p_posnum(n) == -1)
		return (-1);
	if (n == 0)
		return (1);
	while (n > 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}
