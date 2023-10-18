/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraru <smoraru@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 21:13:36 by smoraru           #+#    #+#             */
/*   Updated: 2023/10/16 21:13:43 by smoraru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Counts how many splits are going to be
size_t	ft_count(char const *s, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		if ((s[i] == c && s[i + 1] != c && s[i + 1])
			|| (s[i] != c && i == 0))
			j++;
	i++;
	}
	return (j);
}

void	ft_free(char **s, size_t i)
{
	while (i > 0)
	{
		i--;
		free(s[i]);
	}
	free(s);
}

char	**ft_esplit(char const *s, char c, size_t words)
{
	size_t	start;
	size_t	len;
	size_t	i;
	char	**ptr;

	i = 0;
	start = 0;
	ptr = (char **) malloc((words + 1) * sizeof(char *));
	if (!ptr)
		return (0);
	while (i < words)
	{
		len = 0;
		while (s[start] == c && s[start])
			start++;
		while (s[start + len] != c && s[start + len])
			len++;
		ptr[i] = ft_substr(s, start, len);
		if (!ptr[i])
			return (ft_free(ptr, i), NULL);
		start += len;
		i++;
	}
	ptr[i] = NULL;
	return (ptr);
}

char	**ft_split(char const *s, char c)
{
	size_t	words;
	char	**ptr;

	if (!s)
		return (0);
	words = ft_count(s, c);
	ptr = ft_esplit(s, c, words);
	return (ptr);
}
