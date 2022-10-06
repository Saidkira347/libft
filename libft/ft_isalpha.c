/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souhanat <souhanat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 12:16:15 by souhanat          #+#    #+#             */
/*   Updated: 2022/10/01 19:45:49 by souhanat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int alpha)

{
	if ((alpha >= 'a') && (alpha <= 'z'))
	{
		return (2);
	}
	else if ((alpha >= 'A') && (alpha <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
