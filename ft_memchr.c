/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraru <smoraru@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 22:05:53 by smoraru           #+#    #+#             */
/*   Updated: 2023/10/04 19:59:29 by smoraru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*c1;
	size_t				i;

	c1 = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (c1[i] == (unsigned char)c)
			return ((void *)c1 + i);
		i++;
	}
	return (NULL);
}

/*int main(void)
{
    char *a = "Esternocleidomastoideo";
    void *result = ft_memchr(a, 'l', 5);
    printf("%s\n",result);
    result = ft_memchr(a,'l',ft_strlen(a));
    printf("%s\n",result);
}*/