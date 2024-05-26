/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkarhu <jkarhu@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 01:05:26 by jkarhu            #+#    #+#             */
/*   Updated: 2024/05/06 14:58:47 by jkarhu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*m;

	if (size != 0 && count > SIZE_MAX / size)
		return (NULL);
	m = malloc(count * size);
	if (m == NULL)
		return (NULL);
	ft_bzero(m, count * size);
	return (m);
}
