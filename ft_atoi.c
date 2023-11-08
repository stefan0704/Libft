/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraru <smoraru@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 21:20:02 by smoraru           #+#    #+#             */
/*   Updated: 2023/10/09 20:51:19 by smoraru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

int	ft_atoi(const char *str)
{
	int	result;
	int	sign;
	int	i;

	result = 0;
	sign = 1;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	return (result * sign);
}

/*int main()
{
	char *a;
	a =  "+11224424e45412"; 
	printf("%d\n", ft_atoi(a));
	a = "+----42";
	printf("%d\n", ft_atoi(a));
	a = "+-++-42543";
	printf("%d\n", ft_atoi(a));
	a = "-4254z3";
	printf("%d\n", ft_atoi(a));
}*/