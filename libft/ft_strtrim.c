/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beciftci <beciftci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 17:42:45 by beciftci          #+#    #+#             */
/*   Updated: 2024/10/29 17:11:06 by beciftci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	char	*temp;
	char	*ret;

	if (!set || !s1)
		return (NULL);
	temp = (char *)s1;
	while (*temp && ft_strchr(set, *temp))
		temp++;
	i = ft_strlen(temp);
	while (i && ft_strchr(set, temp[i - 1]))
		i--;
	ret = ft_substr(temp, 0, i);
	return (ret);
}
