/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkarhu <jkarhu@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 17:23:18 by jkarhu            #+#    #+#             */
/*   Updated: 2024/04/24 11:22:50 by jkarhu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*ff1 = (unsigned char *)s1;
	const unsigned char	*ff2 = (unsigned char *)s2;

	if (n == 0)
		return (0);
	while (n > 0)
	{
		if (*ff1 != *ff2)
			return (*ff1 - *ff2);
		ff1++;
		ff2++;
		n--;
	}
	return (0);
}
