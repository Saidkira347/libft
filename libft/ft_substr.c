/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souhanat <souhanat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 14:54:56 by souhanat          #+#    #+#             */
/*   Updated: 2022/10/10 01:11:39 by souhanat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*name;
	
	if(!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	else if (ft_strlen(s) - start < len)
		name = (char *)malloc(ft_strlen(s) - start + 1);
	else
		name = (char *)malloc(len + 1);
	j = start;
	i = 0;
	if (!name)
		return (NULL);
	if (start < ft_strlen(s))
	{
		while (i < len)
		{
			name[i] = s[j];
			i++;
			j++;	
		}
		name[i] = '\0';
		return (name);
	}
	return (name);
}
