/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkarhu <jkarhu@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 19:59:43 by jkarhu            #+#    #+#             */
/*   Updated: 2024/05/14 14:42:18 by jkarhu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *f, ...)
{
	va_list	args;
	int		i;
	int		len;
	int		temp;

	va_start(args, f);
	i = 0;
	len = 0;
	while (f[i])
	{
		temp = len;
		if (f[i] == '%')
			len += symbol_found(f[i++ + 1], args);
		else
			len += p_char(f[i]);
		if (temp > len)
		{
			va_end(args);
			return (-1);
		}
		i++;
	}
	va_end(args);
	return (len);
}
