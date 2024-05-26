/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   symbol_found.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkarhu <jkarhu@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 17:44:08 by jkarhu            #+#    #+#             */
/*   Updated: 2024/05/14 14:13:43 by jkarhu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	symbol_found(char c, va_list args)
{
	int	len;

	len = 0;
	if (c == 'c')
		len += p_char(va_arg(args, int));
	else if (c == 's')
		len += p_str(va_arg(args, char *));
	else if (c == 'p')
		len += p_ptr(va_arg(args, void *));
	else if (c == 'd' || c == 'i')
		len += p_numb(va_arg(args, int));
	else if (c == 'u')
		len += p_unsig(va_arg(args, int));
	else if (c == 'x')
		len += p_ptr_len(va_arg(args, unsigned int), 'a');
	else if (c == 'X')
		len += p_ptr_len(va_arg(args, unsigned int), 'A');
	else if (c == '%')
		len += p_char('%');
	return (len);
}
