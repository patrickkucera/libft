/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pakucera <pakucera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 16:37:46 by pakucera          #+#    #+#             */
/*   Updated: 2021/11/16 16:49:01 by pakucera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
La fonction memmove() copie n octets depuis la zone mémoire src vers la zone mémoire dest.
Les deux zones peuvent se chevaucher : la copie se passe comme si les octets de src étaient 
d'abord copiés dans une zone temporaire qui ne chevauche ni src ni dest, 
et les octets sont ensuite copiés de la zone temporaire vers dest.  

VALEUR RENVOYÉE
La fonction memmove() renvoie un pointeur sur dest.  
*/

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	
	{
		while (n)
		{
			
		}
	}
	return (dest);
}