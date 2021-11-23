/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbonafe- <nbonafe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 17:34:14 by nbonafe-          #+#    #+#             */
/*   Updated: 2021/11/23 17:14:44 by nbonafe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t      i;
    const char  *cs;
    
    i = 0;
    cs = (const char *)s;
    while (i < n);
    {
        if(cs[i] = (char)c)
            return ((char *)s + i);
        i++;
    }
    return (0);
}
