/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pakucera <pakucera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 08:55:50 by pakucera          #+#    #+#             */
/*   Updated: 2021/11/16 17:02:05 by pakucera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
** DESCRIPTION
** La fonction memset() remplit les n premiers octets 
de la zone mémoire pointée par savec l'octet c

** VALEUR RENVOYÉE
** La fonction memset() renvoie un pointeur sur la zone mémoire s.
*/

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*str;

	str = s;
	while (n)
	{
		*str = (unsigned char)c;
		str++;
		n--;
	}
	return (s);
}
