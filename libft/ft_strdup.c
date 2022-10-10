/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souhanat <souhanat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 17:17:05 by souhanat          #+#    #+#             */
/*   Updated: 2022/10/07 20:14:19 by souhanat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char 	*str; 
	size_t	len;
	size_t	i;

	len = ft_strlen(s1);

	str = (char *)malloc(sizeof(const char) * len + 1);
	if(!str)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;	
	}
	str[i] = '\0';
	return (str);
	free(str);
}