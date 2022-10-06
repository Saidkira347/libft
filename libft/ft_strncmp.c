/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souhanat <souhanat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 19:00:45 by souhanat          #+#    #+#             */
/*   Updated: 2022/10/05 20:12:49 by souhanat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	unsigned char *s11;
	unsigned char *s12;
	
	s11 = (unsigned char *)s1;
	s12 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (s11[i] == 0 && s12[i] == 0)
			return (0);
		if (s11[i] == 0 && s12[i] != 0)
			return (-1);
		if (s11[i] - s12[i] < 0)
			return (-1);
		if (s11[i] - s12[i] != 0)
			return (1);
		i++;			
	}
	return (0);
}

// int main(void)
// {
// 	char s1[20] = "said";
// 	char s2[20] = "saod";
	
// 	printf("%d", ft_strncmp(s1,s2,3));
// 	printf("%d", strncmp(s1,s2,3));
// }