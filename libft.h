/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraru <smoraru@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 21:20:47 by smoraru           #+#    #+#             */
/*   Updated: 2023/09/29 20:23:58 by smoraru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdio.h>

void	ft_bzero(void *s, size_t n);
int		ft_isalpha(int x);
int		ft_isalnum(int x);
int		ft_isascii(int x);
int		ft_isdigit(int x);
int		ft_isprint(int x);
void	*ft_memcpy(void *dst, const void *src, size_t n);	
void	*ft_memset(void *b, int c, size_t len);
size_t	ft_strlen(const char *x);
int		ft_tolower(int c);
int		ft_toupper(int c);

#endif
