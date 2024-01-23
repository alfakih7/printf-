/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almohame <almohame@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 18:14:14 by almohame          #+#    #+#             */
/*   Updated: 2024/01/08 18:43:23 by almohame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*next_nde;

	if (lst == NULL || del == NULL)
	{
		return ;
	}
	while (*lst)
	{
		next_nde = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = next_nde;
	}
	*lst = 0;
}
