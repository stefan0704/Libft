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

int	ft_isalnum(int x)
{
	if ((x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z')
		|| (x >= '0' && x <= '9'))
	{
		return (1);
	}
	return (0);
}
