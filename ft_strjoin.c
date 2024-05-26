/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkarhu <jkarhu@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 16:47:16 by jkarhu            #+#    #+#             */
/*   Updated: 2024/05/07 16:05:48 by jkarhu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	pl;
	size_t	sl;
	char	*m;
	size_t	t;

	if (!s1 || !s2)
		return (NULL);
	pl = ft_strlen(s1);
	sl = ft_strlen(s2);
	t = pl + sl;
	m = malloc(t + 1);
	if (!m)
		return (NULL);
	while (*s1)
	{
		*m++ = *s1++;
	}
	while (*s2)
	{
		*m++ = *s2++;
	}
	*m = '\0';
	while (t-- > 0)
		m--;
	return (m);
}
