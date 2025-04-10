/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beciftci <beciftci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 17:20:57 by beciftci          #+#    #+#             */
/*   Updated: 2024/11/09 20:13:40 by beciftci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	ds;
	size_t	ss;

	i = 0;
	ds = ft_strlen(dst);
	ss = ft_strlen(src);
	if (dstsize <= ds)
	{
		return (ss + dstsize);
	}
	while ((src[i] != '\0') && (ds + 1 + i < dstsize))
	{
		dst[ds + i] = src[i];
		i ++;
	}
	dst[ds + i] = '\0';
	return (ds + ss);
}
