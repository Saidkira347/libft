/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souhanat <souhanat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 23:43:56 by souhanat          #+#    #+#             */
/*   Updated: 2022/10/07 17:16:27 by souhanat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t 	alw;
	
	alw = count * size;
	ptr = malloc(alw);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr,alw);
	return (ptr);
}
	