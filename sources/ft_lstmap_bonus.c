/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axcastil <axcastil@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 04:38:33 by axcastil          #+#    #+#             */
/*   Updated: 2024/06/16 13:25:00 by axcastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*aux;
	t_list	*lst2;
	void	*content;

	if (!lst || !f || !del)
		return (NULL);
	lst2 = 0;
	aux = 0;
	while (lst)
	{
		content = f(lst->content);
		aux = ft_lstnew(content);
		if (!aux)
		{
			(del)(content);
			ft_lstclear(&lst2, del);
			return (NULL);
		}
		ft_lstadd_back(&lst2, aux);
		lst = lst->next;
	}
	return (lst2);
}
