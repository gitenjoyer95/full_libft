/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkarhu <jkarhu@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 18:08:12 by jkarhu            #+#    #+#             */
/*   Updated: 2024/05/07 20:43:00 by jkarhu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*wtf(long num, int n, int len);

static void	rev(char *str, int start, int end)
{
	char	t;

	while (start < end)
	{
		t = str[start];
		str[start] = str[end];
		str[end] = t;
		start++;
		end--;
	}
}

char	*ft_itoa(int n)
{
	int		len;
	long	num;
	long	temp;

	len = 0;
	num = n;
	if (num < 0)
	{
		num = -num;
		len++;
	}
	if (num == 0)
		return (ft_strdup("0"));
	temp = num;
	while (temp != 0)
	{
		temp /= 10;
		len++;
	}
	return (wtf(num, n, len));
}

static char	*wtf(long num, int n, int len)
{
	char	*str;
	int		i;

	str = malloc(len + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (num != 0)
	{
		str[i++] = (num % 10) + '0';
		num /= 10;
	}
	if (n < 0)
		str[i++] = '-';
	str[i] = '\0';
	rev(str, 0, i - 1);
	return (str);
}
