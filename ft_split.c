/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaboulka <jaboulka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 15:27:49 by jaboulka          #+#    #+#             */
/*   Updated: 2026/11/05 15:27:51 by jaboulka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_counting(const char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] != '\0')
			count++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (count);
}

static char	**ft_freespace(char **ptr, int k)
{
	while (k >= 0)
	{
		free(ptr[k]);
		k--;
	}
	free(ptr);
	return (NULL);
}

static char	**ft_loop(char **array_ptr, const char *s, char c, size_t words)
{
	size_t	i;
	size_t	j;
	int		k;

	i = 0;
	k = 0;
	while (words > 0 && s[i] != '\0')
	{
		j = 0;
		while (s[i] == c && s[i] != '\0')
			i++;
		while (s[i] != c && s[i] != '\0')
		{
			i++;
			j++;
		}
		array_ptr[k] = ft_substr(s, i - j, j);
		if (!array_ptr[k])
			return (ft_freespace(array_ptr, k));
		k++;
		words--;
	}
	return (array_ptr);
}

char	**ft_split(const char *s, char c)
{
	size_t	words;
	char	**array_ptr;

	if (!s)
		return (NULL);
	words = ft_counting(s, c);
	array_ptr = ft_calloc(words + 1, sizeof(char *));
	if (!array_ptr)
		return (NULL);
	return (ft_loop(array_ptr, s, c, words));
}
