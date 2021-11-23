/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbonafe- <nbonafe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 16:24:29 by nbonafe-          #+#    #+#             */
/*   Updated: 2021/11/23 17:44:22 by nbonafe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

int		ft_atoi(char *str);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t num, size_t size);
int     ft_isalnum(int a);
int     ft_isalpha(int c);
int     ft_isascii(int c);
int     ft_isdigit(int c);
int	    ft_isprint(int c);
char	*ft_itoa(int n);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
void	*ft_memset(void *b, int c, size_t len);

size_t	ft_strlen(const char *c);
int		ft_tolower(int c);
int		ft_tolower(int c);

#endif