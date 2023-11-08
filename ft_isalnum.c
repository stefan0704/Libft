/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraru <smoraru@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 22:05:53 by smoraru           #+#    #+#             */
/*   Updated: 2023/09/27 21:34:40 by smoraru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isalnum(int x)
{
	if ((x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z')
		|| (x >= '0' && x <= '9'))
	{
		return (1);
	}
	return (0);
}

/*int main()
{
	printf("%d\n",ft_isalnum('a'));
	printf("%d\n",ft_isalnum('0'));
	printf("%d\n",ft_isalnum('A'));
	printf("%d\n",ft_isalnum('?'));
}*/
