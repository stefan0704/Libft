/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraru <smoraru@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 22:05:53 by smoraru           #+#    #+#             */
/*   Updated: 2023/10/04 20:18:05 by smoraru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*dp;
	const unsigned char	*sp;
	size_t				i;

	dp = dest;
	sp = src;
	if (!dest && !src)
		return (0);
	i = 1;
	if (src < dest)
	{
		while (i <= n)
		{
			dp[n - i] = sp[n - i];
			i++;
		}
	}
	else
	{
		ft_memcpy(dest, src, n);
	}
	return (dest);
}
/*int main()
{
	char *a = "pathatha";
	char b[10];
	//ft_bzero(b, sizeof(b));

	printf("%s\n",a);
	printf("%s\n",b);
	ft_memmove(b,a,5);
	b[5] = 0;
	printf("%s\n",a);
	printf("%s\n",b);
}*/