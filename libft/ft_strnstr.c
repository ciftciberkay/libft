/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beciftci <beciftci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 16:22:20 by beciftci          #+#    #+#             */
/*   Updated: 2024/10/17 19:03:00 by beciftci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;
	size_t	i;

	i = 0;
	if (needle[i] == '\0')
		return ((char *)(haystack));
	needle_len = ft_strlen(needle);
	while (haystack[i] && (i <= len - needle_len && i < len))
	{
		if (haystack[i] == needle[0])
		{
			if (ft_strncmp(&haystack[i], needle, needle_len) == 0
				&& i + needle_len <= len)
			{
				return ((char *)&haystack[i]);
			}
		}
		i++;
	}
	return (NULL);
}
