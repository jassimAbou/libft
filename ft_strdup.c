/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaboulka <jaboulka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 21:05:39 by jaboulka          #+#    #+#             */
/*   Updated: 2026/10/19 12:49:08 by jaboulka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	size_t	len;

	len = ft_strlen(s1);
	ptr = malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (0);
	ft_memcpy(ptr, s1, len + 1);
	return (ptr);
}
