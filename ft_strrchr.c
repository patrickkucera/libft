/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pakucera <pakucera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 15:52:58 by pakucera          #+#    #+#             */
/*   Updated: 2021/12/22 15:10:54 by pakucera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** NOM
** strrchr, Rechercher un caractère dans une chaîne  
**
** DESCRIPTION
** La fonction strrchr() renvoie un pointeur sur
** la dernière occurrence du caractère c dans la chaîne s.
**
** VALEUR RENVOYÉE
** La fonction strrchr() renvoient un pointeur sur le caractère
** correspondant, ou NULL si le caractère n'a pas été trouvé.
*/

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*str;

	str = s;
	while (*s)
		s++;
	while (s >= str)
		if (*s-- == (char)c)
			return ((char *)s + 1);
	return (0);
}
