/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkarhu <jkarhu@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 19:08:24 by jkarhu            #+#    #+#             */
/*   Updated: 2024/04/24 02:01:12 by jkarhu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ff = (const unsigned char *)s;
	unsigned char		f;

	f = (unsigned char)c;
	if (n == 0)
		return (0);
	while (n-- > 0)
	{
		if (*ff == f)
			return ((void *)ff);
		ff++;
	}
	return ((void *) NULL);
}
