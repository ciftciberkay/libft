/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beciftci <beciftci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 15:11:50 by beciftci          #+#    #+#             */
/*   Updated: 2024/11/07 16:45:00 by beciftci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'))
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}
