/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkarhu <jkarhu@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 16:15:18 by jkarhu            #+#    #+#             */
/*   Updated: 2024/05/07 16:35:07 by jkarhu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**allocer(char const *s, char **words, char c, int i);
static char	*freenibbles(char **words, int i);

char	**ft_split(char const *s, char c)
{
	int		splits;
	int		i;
	char	**words;

	i = 0;
	splits = 0;
	if (!s)
		return (NULL);
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			splits++;
		i++;
	}
	words = malloc((splits + 1) * sizeof(char *));
	if (!words)
		return (NULL);
	i = 0;
	if (!allocer(s, words, c, i))
		return (NULL);
	return (words);
}

static char	**allocer(char const *s, char **words, char c, int i)
{
	int	len;

	while (*s)
	{
		len = 0;
		while (*s == c)
			s++;
		while (s[len] != c && s[len] != '\0')
			len++;
		if (len > 0)
		{
			words[i] = malloc(len + 1);
			if (!words[i])
			{
				freenibbles(words, i);
				return (NULL);
			}
			ft_strlcpy(words[i], s, len + 1);
			words[i++][len] = '\0';
			s += len;
		}
	}
	words[i] = NULL;
	return (words);
}

static char	*freenibbles(char **words, int i)
{
	while (i-- > 0)
		free(words[i]);
	free(words);
	return (NULL);
}
