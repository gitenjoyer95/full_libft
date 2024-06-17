/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_ptr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkarhu <jkarhu@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 14:56:02 by jkarhu            #+#    #+#             */
/*   Updated: 2024/05/14 14:59:14 by jkarhu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	p_ptr_print(unsigned long i, const char c)
{
	int	error;

	if (i >= 16)
	{
		error = p_ptr_print(i / 16, c);
		if (error == -1)
			return (-1);
		error = p_ptr_print(i % 16, c);
		if (error == -1)
			return (-1);
	}
	else
	{
		if (i > 9)
		{
			if (p_char(i - 10 + c) == -1)
				return (-1);
		}
		else
		{
			if (p_numb(i) == -1)
				return (-1);
		}
	}
	return (1);
}

int	p_ptr_len(unsigned long i, const char c)
{
	int	len;

	len = 0;
	if (p_ptr_print(i, c) == -1)
		return (-1);
	if (i == 0)
		return (1);
	while (i > 0)
	{
		len++;
		i /= 16;
	}
	return (len);
}

int	p_ptr(void *p)
{
	unsigned long	i;
	int				len;

	i = (unsigned long)p;
	if (p_str("0x") == -1)
		return (-1);
	len = p_ptr_len(i, 'a');
	if (len == -1)
		return (len);
	else
		return (len + 2);
}
