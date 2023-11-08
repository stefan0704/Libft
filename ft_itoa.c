/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraru <smoraru@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 21:20:02 by smoraru           #+#    #+#             */
/*   Updated: 2023/10/09 20:51:19 by smoraru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//PORQUE n * 1?
size_t	ft_numcounter(int n)
{
	size_t	digits;

	if (n <= 0)
		digits = 1;
	else
	{
		digits = 0;
	}
	while (n != 0)
	{
		n /= 10;
		digits++;
	}
	return (digits);
}

char	*ft_itoa(int n)
{
	size_t	len;
	size_t	isneg;
	char	*ptr;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = ft_numcounter(n);
	isneg = 0;
	ptr = malloc((len +1) * sizeof(char));
	if (!ptr)
		return (0);
	if (n < 0)
	{
		ptr[0] = '-';
		n = n * -1;
		isneg = 1;
	}
	ptr[len] = 0;
	while (len > (0 + isneg))
	{
		ptr[len -1] = n % 10 + '0';
		n /= 10;
		len--;
	}
	return (ptr);
}

/*int main()
{
	printf("%s\n", ft_itoa(325));
	printf("%s\n", ft_itoa(-256));
	printf("%s\n", ft_itoa(-2147483648));
	printf("%s\n", ft_itoa(987654321));
}*/






