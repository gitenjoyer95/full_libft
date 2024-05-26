/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkarhu <jkarhu@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 14:33:56 by jkarhu            #+#    #+#             */
/*   Updated: 2024/04/26 14:20:53 by jkarhu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*og_b;

	og_b = (char *)b;
	while (len > 0)
	{
		*og_b = (char)c;
		og_b++;
		len--;
	}
	return (b);
}
