/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkarhu <jkarhu@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 01:41:30 by jkarhu            #+#    #+#             */
/*   Updated: 2024/04/24 16:32:31 by jkarhu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*m;
	int		len;

	len = ft_strlen(s1) + 1;
	m = malloc(len * sizeof(char));
	if (!m)
		return (NULL);
	ft_strlcpy(m, s1, len);
	return (m);
}
