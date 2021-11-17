/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pakucera <pakucera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 08:52:39 by pakucera          #+#    #+#             */
/*   Updated: 2021/11/17 12:09:22 by pakucera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** DESCRIPTION : La fonction memcpy() copie n octets depuis la zone mémoire
** src vers la zone mémoire dst. Les deux zones ne doivent pas se chevaucher.
** Si c'est le cas, utilisez plutot memmove(3).
**
** VALEUR RENVOYEE : La fonction memcpy() renvoie un pointeur sur dest.
*/

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	char	*ptr1;
	char	*ptr2;

	ptr1 = (char *)dest;
	ptr2 = (char *)src;
	while (len)
	{
		*ptr1 = *ptr2;
		ptr1++;
		ptr2++;
		len--;
	}
	return (dest);
}
