/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkarhu <jkarhu@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 20:20:41 by jkarhu            #+#    #+#             */
/*   Updated: 2024/05/07 16:37:13 by jkarhu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	xd;

	if ((!haystack || !needle) && len == 0)
		return (NULL);
	xd = ft_strlen(needle);
	if (*needle == '\0')
		return ((char *)haystack);
	while (*haystack && len >= xd)
	{
		if (ft_strncmp(haystack, needle, xd) == 0)
			return ((char *)haystack);
		len--;
		haystack++;
	}
	return (NULL);
}
