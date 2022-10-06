/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souhanat <souhanat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 10:59:17 by souhanat          #+#    #+#             */
/*   Updated: 2022/10/06 16:27:45 by souhanat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	
	if (len == 0)
		return ((char *));
	if (!needle)
		return ((char *) haystack);
	while (i < len)
	{
		// j = 0;
		// if (haystack[i] == needle[j])
		// {
		// 	while (i + j < len && needle[j] && haystack[i + j] == needle[j])
		// 	{
		// 		j++;
		// 	}
		// 	if (j == ft_strlen(needle))
		// 		return ((char *)(haystack + i));
		// }
		// i++;
		j = 0;
		while (haystack[i + j] == needle[j] && needle[j] && (i+j) < len)
			j++;
		if (!needle[j])
			return((char *)haystack + i);
		i++;
	}
	return (0);
}

int main()
{
	char *haystack = "ffffff";
	char *needle = "";
	
	printf("%s\n", strnstr(haystack,needle,0));
}
