/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souhanat <souhanat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 10:59:17 by souhanat          #+#    #+#             */
/*   Updated: 2022/10/18 18:03:29 by souhanat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	i = 0;
	if (!needle[i])
		return ((char *) haystack);
	if (len == 0)
		return (NULL);
	while (haystack[i] && i < len)
	{
		if (!ft_strncmp(needle, (haystack + i), ft_strlen(needle))
			&& i < (len - (ft_strlen(needle) - 1)))
			return ((char *)&haystack[i]);
		i++;
	}
	return (0);
}
