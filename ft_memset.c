/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaboulka <jaboulka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 14:03:48 by jaboulka          #+#    #+#             */
/*   Updated: 2026/10/15 17:19:06 by jaboulka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*space;
	size_t			i;

	space = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		space[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
