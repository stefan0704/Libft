/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraru <smoraru@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 16:47:43 by smoraru           #+#    #+#             */
/*   Updated: 2023/10/05 18:10:28 by smoraru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	int				i;
	unsigned char	c1;

	c1 = c;
	i = 0;
	while (s[i] != c1 && s[i] != '\0')
		i++;
	if (s[i] == c1)
		return ((char *)&s[i]);
	return (NULL);
}

/*int main()
{
	char *a	= strchr("te\0ste", '\0');
	char *b = ft_strchr("te\0ste", '\0');
	printf("%s\n", a);
	printf("%s\n", b);
}*/
