/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pakucera <pakucera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 14:18:37 by pakucera          #+#    #+#             */
/*   Updated: 2021/11/17 14:42:39 by pakucera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** NOM
** bzero - Écrire des octets de valeur zéro dans un bloc d'octets  
**
** DESCRIPTION
** La fonction bzero() met à 0 (octets contenant « \0 ») 
** les n premiers octets du bloc pointé par s. 
** 
** VALEUR RENVOYÉE
** Aucune
*/

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*d;

	d = (unsigned char *)s;
	while (n-- > 0)
	{
		*d = '\0';
		d++;
	}
}
