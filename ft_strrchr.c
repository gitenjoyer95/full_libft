/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkarhu <jkarhu@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 14:50:54 by jkarhu            #+#    #+#             */
/*   Updated: 2024/04/23 16:59:12 by jkarhu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char		a;
	const char	*start = s;

	a = (char)c;
	while (*s)
		s++;
	if (a == '\0')
		return ((char *)s);
	while (s != start)
	{
		s--;
		if (*s == a)
			return ((char *)s);
	}
	return (NULL);
}
