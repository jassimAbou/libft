/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaboulka <jaboulka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 14:38:51 by jaboulka          #+#    #+#             */
/*   Updated: 2026/10/27 10:49:10 by jaboulka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*test;

	if (!lst || !del)
		return ;
	while (*lst != NULL)
	{
		test = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = test;
	}
}
