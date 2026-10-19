/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaboulka <jaboulka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 17:23:33 by jaboulka          #+#    #+#             */
/*   Updated: 2026/10/15 19:58:08 by jaboulka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*space;
	unsigned char	*space1;

	space = (unsigned char *)dest;
	space1 = (unsigned char *)src;
	if (!src && !dest)
		return (0);
	else if (dest > src)
	{
		while (n > 0)
		{
			space[n - 1] = space1[n - 1];
			n--;
		}
	}
	else if (dest < src)
		ft_memcpy(dest, src, n);
	return (dest);
}
