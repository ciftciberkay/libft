/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beciftci <beciftci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:38:32 by beciftci          #+#    #+#             */
/*   Updated: 2024/10/23 14:57:33 by beciftci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	const char	*end;

	end = NULL;
	while (*str != '\0')
	{
		if (*str == (char)c)
			end = str;
		str++;
	}
	if ((char)c == '\0')
		return ((char *)str);
	return ((char *)end);
}
