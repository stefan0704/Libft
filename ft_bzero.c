/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraru <smoraru@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 23:08:27 by smoraru           #+#    #+#             */
/*   Updated: 2023/10/04 20:10:41 by smoraru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}

/*int main()
{
    char str1[] = "Joselito";
    char str2[] = "Manolito";

    printf("%s\n", str1);
    printf("%s\n", str2);

    ft_bzero(str1, 5);
    ft_bzero(str2+3, 10);
    printf("\nDespues\n");
    printf("%s\n", str1);
    printf("%s\n", str1+5);
    printf("%s\n", str2);

    return 0;
}*/