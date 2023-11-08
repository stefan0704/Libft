/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraru <smoraru@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 21:08:23 by smoraru           #+#    #+#             */
/*   Updated: 2023/09/27 22:14:43 by smoraru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *x)
{
	int	i;

	i = 0;
	while (x[i] != '\0')
		i++;
	return (i);
}

/*int main(int argc, char **argv)
{
	if (argc == 2)
		printf("%zu\n", ft_strlen(argv[1]));
	return (0);
}*/