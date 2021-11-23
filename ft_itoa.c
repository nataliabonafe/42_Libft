/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbonafe- <nbonafe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 20:28:12 by nbonafe-          #+#    #+#             */
/*   Updated: 2021/11/23 10:45:43 by nbonafe-         ###   ########.fr       */
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
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*num;
	size_t	len;

	len = count(n);
	num = (char *)malloc(sizeof(*num) * (len + 1));
	if (!num)
		return (NULL);
	if (n < 0)
	{
		num[0] = '-';
		n = -n;
	}
	num[len--] = '\0';
	while (n)
	{
		num[len--] = n % 10 + 48;
		n /= 10;
	}
	return (num);
}

int	main(void)
{
	printf("%s\n", ft_itoa(-85851455));
}
