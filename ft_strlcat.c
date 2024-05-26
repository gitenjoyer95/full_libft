/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkarhu <jkarhu@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 14:07:57 by jkarhu            #+#    #+#             */
/*   Updated: 2024/05/07 16:26:19 by jkarhu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	d_len;
	size_t	s_len;
	size_t	i;

	d_len = 0;
	s_len = 0;
	i = 0;
	if ((!src || !dst) && dstsize == 0)
		return (0);
	while (dst[d_len] != '\0')
		d_len++;
	while (src[s_len] != '\0')
		s_len++;
	if (dstsize == 0 || d_len >= dstsize)
		return (s_len + dstsize);
	while (i < dstsize - d_len - 1 && src[i] != '\0')
	{
		dst[i + d_len] = src[i];
		i++;
	}
	dst[i + d_len] = '\0';
	return (d_len + s_len);
}
