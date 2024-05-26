/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkarhu <jkarhu@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 17:21:10 by jkarhu            #+#    #+#             */
/*   Updated: 2024/04/26 03:23:00 by jkarhu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	finder(const char c, const char *s);

char	*ft_strtrim(char const *s1, char const *set)
{
	char		*m;
	char		*og_m;
	const char	*e;

	if (!s1 || !set)
		return (ft_strdup(""));
	e = s1 + ft_strlen(s1) - 1;
	while (finder(*s1, set))
		s1++;
	while (e > s1 && finder(*e, set))
		e--;
	m = malloc(e - s1 + 2);
	if (!m)
		return (NULL);
	og_m = m;
	while (e >= s1)
		*m++ = *s1++;
	*m = '\0';
	return (og_m);
}

static int	finder(const char c, const char	*s)
{
	while (*s)
	{
		if (*s == c)
			return (1);
		s++;
	}
	return (0);
}
