/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beciftci <beciftci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 15:36:35 by beciftci          #+#    #+#             */
/*   Updated: 2024/10/21 15:43:43 by beciftci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *ptr, int value, size_t num)
{
	const unsigned char	*p;
	unsigned char		val;

	p = (const unsigned char *)ptr;
	val = (unsigned char)value;
	while (num--)
	{
		if (*p == val)
			return ((void *)p);
		p++;
	}
	return (NULL);
}
