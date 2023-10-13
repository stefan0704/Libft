/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraru <smoraru@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 21:06:44 by smoraru           #+#    #+#             */
/*   Updated: 2023/10/13 18:51:53 by smoraru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;

	if (!s)
		return (NULL);
	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	ptr = malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < len)
	{
		ptr[i] = s[start + i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	x;
	char	*dst;
	size_t	lens;

	x = 0;
	if (!s)
		return (NULL);
	lens = ft_strlen((char *)s);
	if (len == 0 || lens == 0)
		return (ft_strdup(""));
	if (start >= lens)
		return (ft_strdup(""));
	if (len > lens - start)
		len = lens - start;
	dst = (char *)malloc(sizeof(char) * (len +1));
	if (!dst)
		return (0);
	while ((start < ft_strlen(s)) && (x < len))
	{
			dst[x] = s[start];
			start++;
			x++;
	}
	dst[x] = '\0';
	return (dst);
}