/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beciftci <beciftci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 13:18:27 by beciftci          #+#    #+#             */
/*   Updated: 2024/11/07 16:58:22 by beciftci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t num)
{
	unsigned char	*s;
	size_t			i;

	i = 0;
	s = (unsigned char *)ptr;
	while (i < num)
	{
		s[i] = value;
		i++;
	}
	return (ptr);
}
