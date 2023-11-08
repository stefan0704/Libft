/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraru <smoraru@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 01:02:01 by smoraru           #+#    #+#             */
/*   Updated: 2023/10/04 20:07:19 by smoraru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*dp;
	const unsigned char	*sp;
	size_t				i;

	i = 0;
	if (!dst && !src)
		return (0);
	dp = dst;
	sp = src;
	while (i < n)
	{
		dp[i] = sp[i];
		i++;
	}
	return (dst);
}

/*int main()
{
	void *a = "josele";
	void *b = "manolo";
	char c[8];
	ft_memcpy(c,a,6);
	printf("%s\n",c);
	ft_memcpy(c,b,3);
	printf("%s\n",c);
}*/
