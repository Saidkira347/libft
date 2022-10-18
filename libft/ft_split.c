/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souhanat <souhanat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 22:14:45 by souhanat          #+#    #+#             */
/*   Updated: 2022/10/18 17:34:12 by souhanat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	counta(const char *p2, char c)
{
	size_t	size;

	size = 0;
	while (p2[size] && p2[size] != c)
		size++;
	return (size);
}

static int	countw(char *s, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == 0))
			j++;
		i++;
	}
	return (j);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	char	**ptr;

	if (!s)
		return (0);
	j = countw((char *)s, c);
	i = 0;
	ptr = malloc(sizeof(char *) * (j + 1));
	if (!ptr)
		return (0);
	while (*(char *)s)
	{
		if (*(char *)s != c)
		{
			ptr[i] = ft_substr((char *)s, 0, counta((char *)s, c));
			s += counta((char *)s, c);
			i++;
		}
		else
			s++;
	}
	ptr[i] = 0;
	return (ptr);
}

// int main()
// {
// 	int i = 0;
// 	char **str;
// 	char *s = "hello world how are you";
// 	str = ft_split(s, ' ');
// 	while (str[i])
// 	{
// 		printf("%s", str[i]);
// 		i++;

// 	}
// }

// //     hello   said      kira