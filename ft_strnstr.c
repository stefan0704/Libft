/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraru <smoraru@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 22:05:53 by smoraru           #+#    #+#             */
/*   Updated: 2023/10/06 21:19:35 by smoraru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *a, const char *b, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!a || !b)
		return (NULL);
	if (!b || !b[0])
		return ((char *)a);
	while (a[i] && i < n)
	{
		j = 0;
		while (a[i + j] && b[j] && i + j < n && a[i + j] == b[j])
			j++;
		if (!b[j])
			return ((char *)&a[i]);
		i++;
	}
	return (NULL);
}
