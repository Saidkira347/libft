/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souhanat <souhanat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 16:00:42 by souhanat          #+#    #+#             */
/*   Updated: 2022/10/18 18:18:14 by souhanat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	to_string(int size, int n, char *str, int j)
{
	while (size > j)
	{
		str[size - 1] = n % 10 + 48;
		n = n / 10;
		size--;
	}
}

int	caln(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		i++;
		n *= -1;
	}
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		size;
	int		j;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	j = 0;
	if (n < 0)
		j = 1;
	size = caln(n);
	str = (char *)malloc(size + 1);
	if (!str)
		return (NULL);
	str[size] = '\0';
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	to_string(size, n, str, j);
	return (str);
}
