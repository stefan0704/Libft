/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraru <smoraru@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 01:02:01 by smoraru           #+#    #+#             */
/*   Updated: 2023/10/04 20:07:19 by smoraru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*c1;
	const unsigned char	*c2;
	size_t				i;

	c1 = (const unsigned char *)s1;
	c2 = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (c1[i] != c2[i])
			return (c1[i] - c2[i]);
		i++;
	}
	return (0);
}

/*int main()
{
	void *s1 = "patata";
	void *s2 = "patata";
	printf("%d\n",ft_memcmp(s1,s2,4));
	s1 = "patato";
	s2 = "patata";
	printf("%d\n",ft_memcmp(s1,s2,6));
}*/
