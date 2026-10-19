/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaboulka <jaboulka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 09:28:01 by jaboulka          #+#    #+#             */
/*   Updated: 2026/10/16 12:44:31 by jaboulka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	lendest;
	size_t	lensrc;
	size_t	i;

	i = 0;
	lendest = 0;
	lensrc = 0;
	while (lendest < size && dest[lendest] != '\0')
		lendest++;
	while (src[lensrc] != '\0')
		lensrc++;
	if (lendest == size)
		return (size + lensrc);
	while (src[i] != '\0' && i < (size - lendest - 1))
	{
		dest[lendest + i] = src[i];
		i++;
	}
	dest[lendest + i] = '\0';
	return (lendest + lensrc);
}
