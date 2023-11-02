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
/*
int main()
{
    char str1[] = "Hello, World!";
    char str2[] = "This is a test";

    printf("Antes de ft_bzero:\n");
    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);

    ft_bzero(str1, 5);
    ft_bzero(str2+3, 10);

    printf("\nDespués de ft_bzero:\n");
    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);

    return 0;
}*/