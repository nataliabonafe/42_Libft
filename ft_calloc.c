/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbonafe- <nbonafe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 13:39:54 by nbonafe-          #+#    #+#             */
/*   Updated: 2021/11/23 17:06:19 by nbonafe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void    *pointer;

    pointer = malloc(num * size);
    if (!pointer)
        return (NULL);
    ft_bzero(pointer, num * size);
    return (pointer);
}
