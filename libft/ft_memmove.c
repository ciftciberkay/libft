/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beciftci <beciftci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 15:08:25 by beciftci          #+#    #+#             */
/*   Updated: 2024/11/09 20:28:31 by beciftci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *destination, const void *source, size_t num)
{
	unsigned char		*dest;
	const unsigned char	*src;

	dest = (unsigned char *)destination;
	src = (const unsigned char *)source;
	if (dest == src)
		return (dest);
	if (src < dest)
	{
		dest += num;
		src += num;
		while (num--)
			*(--dest) = *(--src);
	}
	else
	{
		while (num--)
			*dest++ = *src++;
	}
	return (destination);
}
