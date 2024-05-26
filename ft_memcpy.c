/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkarhu <jkarhu@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 16:29:58 by jkarhu            #+#    #+#             */
/*   Updated: 2024/04/23 22:43:44 by jkarhu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*og_dst;
	const char	*og_src;
	size_t		i;

	og_dst = (char *)dst;
	og_src = (const char *)src;
	i = 0;
	if (!dst && !src)
		return (NULL);
	while (n > i)
	{
		og_dst[i] = og_src[i];
		i++;
	}
	return (dst);
}
