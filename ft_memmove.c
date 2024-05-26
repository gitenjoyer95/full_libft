/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkarhu <jkarhu@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 17:43:11 by jkarhu            #+#    #+#             */
/*   Updated: 2024/04/19 17:04:44 by jkarhu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*og_dest;
	char	*og_src;
	size_t	i;

	og_dest = (char *)dst;
	og_src = (char *)src;
	i = 0;
	if (!dst && !src)
		return (NULL);
	if (dst > src)
	{
		while (len-- > 0)
			og_dest[len] = og_src[len];
	}
	else
	{
		while (i < len)
		{
			og_dest[i] = og_src[i];
			i++;
		}
	}
	return (dst);
}
