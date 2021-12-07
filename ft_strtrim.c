/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbonafe- <nbonafe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 16:12:24 by nbonafe-          #+#    #+#             */
/*   Updated: 2021/12/07 15:53:36 by nbonafe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	front;
	size_t	rear;
	char	*str;

	str = 0;
	if (s1 && set)
	{
		front = 0;
		rear = ft_strlen(s1);
		while (s1[front] && ft_strchr(set, s1[front]))
		{
			front++;
		}
		while (s1[rear - 1] && ft_strchr(set, s1[rear - 1]) && rear > front)
		{
			rear--;
		}
		str = (char *)malloc(sizeof(*str) * (rear - front + 1));
		ft_strlcpy(str, &s1[front], rear - front + 1);
	}
	return (str);
}
