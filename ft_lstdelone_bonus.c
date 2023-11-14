/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraru <smoraru@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 22:05:53 by smoraru           #+#    #+#             */
/*   Updated: 2023/10/04 19:59:29 by smoraru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst)
	{
		del(lst->content);
		free(lst);
	}
}
/* 
void pintaContent(void *content)
{
    printf("Elemento: %s\n", content);
} */
/* int main()
{
	t_list *coso = ft_lstnew("hakuna atatat");
	pintaContent(coso->content);
	ft_lstdelone(coso,pintaContent);
	if (coso == NULL)
    {
        printf("El elemento ha sido eliminado correctamente.\n");
    }
} */
