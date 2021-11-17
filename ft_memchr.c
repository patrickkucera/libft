/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pakucera <pakucera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 15:38:39 by pakucera          #+#    #+#             */
/*   Updated: 2021/11/17 15:46:09 by pakucera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
** NOM
** memchr, Rechercher un caractère dans une zone mémoire  
** 
** DESCRIPTION
** La fonction memchr() examine les n premiers octets de la zone mémoire 
** pointée par s à la recherche du caractère c. Le premier octet correspondant
** à c (interprété comme un unsigned char) arrête l opération.
**
** VALEUR RENVOYÉE
** Les fonctions memchr() renvoient un pointeur sur octet correspondant,
** ou NULL si le caractère n est pas présent dans la zone de mémoire concernée.
*/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	while (n--)
	{
		if (*str == (unsigned char)c)
			return (str);
		str++;
	}
	return (NULL);
}
