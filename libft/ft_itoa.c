/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beciftci <beciftci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 16:34:28 by beciftci          #+#    #+#             */
/*   Updated: 2024/10/31 17:05:11 by beciftci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	intlenn(int x)
{
	int	a;

	a = 0;
	if (x < 0)
	{
		a++;
		x = -x;
	}
	while (x > 0)
	{
		x = x / 10;
		a++;
	}
	return (a);
}

char	*ft_itoa(int n)
{
	char	*ret;
	int		a;
	int		size;

	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	size = intlenn(n);
	ret = malloc(size + 1);
	if (!ret)
		return (NULL);
	if (n < 0)
	{
		ret[0] = '-';
		n = -n;
	}
	a = size;
	while (n > 0 && a--)
	{
		ret[a] = '0' + (n % 10);
		n = n / 10;
	}
	ret[size] = '\0';
	return (ret);
}
