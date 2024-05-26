/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_numb.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkarhu <jkarhu@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 14:49:03 by jkarhu            #+#    #+#             */
/*   Updated: 2024/05/14 14:55:50 by jkarhu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	p_len(int n);

int	p_numb(int n)
{
	long	i;
	int		error;

	error = 0;
	i = n;
	if (i < 0)
	{
		if (p_char('-') == -1)
			return (-1);
		i = -i;
	}
	if (i > 9)
	{
		error = p_numb(i / 10);
		if (error == -1)
			return (-1);
	}
	if (p_char(i % 10 + '0') == -1)
		return (-1);
	else
		return (p_len(n));
}

static int	p_len(int n)
{
	int	len;

	if (n == 0)
		return (1);
	len = 0;
	if (n < 0)
		len++;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}
