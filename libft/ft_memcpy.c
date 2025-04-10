/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beciftci <beciftci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 15:24:40 by beciftci          #+#    #+#             */
/*   Updated: 2024/11/09 15:00:58 by beciftci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t num)
{
	unsigned char		*dest;
	const unsigned char	*src2;

	if (dst == src)
		return (dst);
	dest = (unsigned char *)dst;
	src2 = (const unsigned char *)src;
	while (num--)
		*dest++ = *src2++;
	return (dst);
}
