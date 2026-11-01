/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaboulka <jaboulka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 14:32:02 by jaboulka          #+#    #+#             */
/*   Updated: 2026/11/01 19:58:05 by jaboulka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*space;
	const unsigned char	*space1;

	i = 0;
	space = (unsigned char *)dest;
	space1 = (const unsigned char *)src;
	while (i < n)
	{
		space[i] = space1[i];
		i++;
	}
	return (dest);
}
