/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbonafe- <nbonafe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 20:28:12 by nbonafe-          #+#    #+#             */
/*   Updated: 2021/12/07 18:24:13 by nbonafe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	count(int n)
{
	size_t	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*num;
	size_t	len;
	long	nb;

	len = count(n);
	nb = n;
	num = (char *)malloc(sizeof(char) * (len + 1));
	if (!num)
		return (NULL);
	if (nb < 0)
	{
		num[0] = '-';
		nb = -nb;
	}
	if (nb == 0)
		num[0] = '0';
	num[len--] = '\0';
	while (nb)
	{
		num[len--] = nb % 10 + 48;
		nb /= 10;
	}
	return (num);
}
