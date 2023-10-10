/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraru <smoraru@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 21:06:44 by smoraru           #+#    #+#             */
/*   Updated: 2023/10/10 21:06:46 by smoraru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *res;
	size_t i;
	size_t j;

	res = malloc(len);
	i = 0;
	if (!res)
		return (NULL);
	while (i < ft_strlen(s))
	{
		if (s[i] == (unsigned char)start)
		{
			j = 0;
			while (j < len)
			{
				res[j] = s[i];
				j++;
				i++;
			}
			res[j] = '\0';
			return (res);
		}
		i++;
	}
	return (NULL);
}