/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pakucera <pakucera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 16:39:58 by pakucera          #+#    #+#             */
/*   Updated: 2021/12/22 14:25:45 by pakucera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**
**
**
*/

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (src[i] && i < size - 1)
	{	
		dst[i] = src[i];
		i++;
	}
	if (i < size)
		dst[i] = 0;
	while (src[i])
		i++;
	return (i);
}
