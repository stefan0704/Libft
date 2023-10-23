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
	if (b[0] == '\0')
		return ((char *)a);
	while (a[i] != '\0' && i < n)
	{
		j = 0;
		while (b[j] == a[i + j] && b[j] != '\0' && i + j < n)
		{
			if (b[j + 1] == '\0')
				return ((char *) &a[i]);
			j++;
		}
		i++;
	}
	return (0);
}
