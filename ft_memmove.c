/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pakucera <pakucera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 16:37:46 by pakucera          #+#    #+#             */
/*   Updated: 2021/12/22 12:50:57 by pakucera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** DESCRIPTION
** La fonction memmove() copie n octets depuis la zone mémoire src 
** vers la zone mémoire dest. Les deux zones peuvent se chevaucher : 
** la copie se passe comme si les octets de src étaient 
** d'abord copiés dans une zone temporaire qui ne chevauche ni src ni dest, 
** et les octets sont ensuite copiés de la zone temporaire vers dest.  

** VALEUR RENVOYÉE
** La fonction memmove() renvoie un pointeur sur dest.  

*/

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*d;
	char	*s;

	d = (char *) dst;
	s = (char *) src;
	if (src < dst)
		while (n--)
			d[n] = s[n];
	else if (dst < src)
		while (n--)
			*d++ = *s++;
	return (dst);
}
