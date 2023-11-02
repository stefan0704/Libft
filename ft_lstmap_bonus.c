/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraru <smoraru@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 20:43:25 by smoraru           #+#    #+#             */
/*   Updated: 2023/10/25 20:43:28 by smoraru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_node;
	t_list	*tmp;

	if (!f || !del)
		return (NULL);
	new_lst = NULL;
	while (lst)
	{
		tmp = (*f)(lst->content);
		new_node = ft_lstnew(tmp);
		if (!new_node)
		{
			ft_lstclear(&new_lst, del);
			free(tmp);
			lst = NULL;
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new_node);
		lst = lst->next;
	}
	return (new_lst);
}
