/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pakucera <pakucera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 08:52:39 by pakucera          #+#    #+#             */
/*   Updated: 2021/11/16 16:59:40 by pakucera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** DESCRIPTION : La fonction memcpy() copie n octets depuis la zone mémoire
** src vers la zone mémoire dst. Les deux zones ne doivent pas se chevaucher.
** Si c'est le cas, utilisez plutôt memmove(3).
**
** VALEUR RENVOYEE : La fonction memcpy() renvoie un pointeur sur dest.
*/

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*str;

	str = (char *)dest;
	while (n)
	{
		*(char *)str = *(char *)src;
		str++;
		src++;
		n--;
	}
	return (dest);
}

/*
** MA VERSION

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*str;

	str = dest;
	while (n)
	{
		*str = src;
		str++;
		n--;
	}
	return (dest);
}*/