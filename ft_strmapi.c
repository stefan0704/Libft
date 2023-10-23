/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraru <smoraru@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 21:20:02 by smoraru           #+#    #+#             */
/*   Updated: 2023/10/09 20:51:19 by smoraru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new_ptr;
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(s);
	new_ptr = malloc(sizeof(char) * (len + 1));
	if (!new_ptr)
		return (0);
	while (i < len)
	{
		new_ptr[i] = f(i, s[i]);
		i++;
	}
	new_ptr[i] = '\0';
	return (new_ptr);
}
