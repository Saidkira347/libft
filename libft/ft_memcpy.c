/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souhanat <souhanat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 15:35:27 by souhanat          #+#    #+#             */
/*   Updated: 2022/10/05 15:17:16 by souhanat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *desc, const void *src, size_t n)
{
	char	*cad;
	char	*cas;
	size_t	i;

	cad = desc;
	cas = (void *)src;
	i = 0;
	if (desc == 0 && src == 0)
		return (0);
	while (i < n)
	{
		cad[i] = cas[i];
		i++;
	}
	return (cad);
}
