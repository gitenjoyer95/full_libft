/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkarhu <jkarhu@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 12:18:11 by jkarhu            #+#    #+#             */
/*   Updated: 2024/05/07 20:46:10 by jkarhu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*m;
	size_t	r;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	r = ft_strlen(s) - start;
	if (len >= r)
		len = r;
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	m = malloc(len + 1);
	if (!m)
		return (NULL);
	while (s[start] && len > i)
		m[i++] = s[start++];
	m[i] = '\0';
	return (m);
}
