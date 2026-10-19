/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaboulka <jaboulka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 11:50:46 by jaboulka          #+#    #+#             */
/*   Updated: 2026/10/18 19:56:37 by jaboulka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*space;
	size_t			i;

	space = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (space[i] == (unsigned char)c)
			return ((void *)&space[i]);
		i++;
	}
	return (0);
}
