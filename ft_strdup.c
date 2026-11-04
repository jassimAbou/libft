/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaboulka <jaboulka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 21:05:39 by jaboulka          #+#    #+#             */
/*   Updated: 2026/11/04 18:19:42 by jaboulka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ptr;
	size_t	len;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	ptr = malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (0);
	ft_memcpy(ptr, s, len + 1);
	return (ptr);
}
