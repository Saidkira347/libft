/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souhanat <souhanat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 14:54:56 by souhanat          #+#    #+#             */
/*   Updated: 2022/10/18 18:14:17 by souhanat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	srlen;
	char	*name;

	i = 0;
	if (!s)
		return (0);
	srlen = ft_strlen(s);
	if (len > srlen)
		len = srlen;
	name = (char *)malloc(len + 1);
	if (!name)
		return (0);
	if (start < srlen)
	{
		while (i < len)
		{
			name[i] = s[start + i];
			i++;
		}
	}
	name[i] = '\0';
	return (name);
}
