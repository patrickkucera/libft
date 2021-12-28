/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pakucera <pakucera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 14:58:59 by pakucera          #+#    #+#             */
/*   Updated: 2021/12/28 14:59:01 by pakucera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** NOM
** strdup, strndup, strdupa, strndupa - Dupliquer une chaîne  
** 
** DESCRIPTION
** La fonction strdup() renvoie un pointeur sur une nouvelle chaîne de
** caractères qui est dupliquée depuis s. La mémoire occupée par cette
** nouvelle chaîne est obtenue en appelant malloc(3), et peut (doit) donc être
** libérée avec free(3).
** 
** VALEUR RENVOYÉE
** La fonction strdup() renvoie un pointeur sur la chaîne dupliquée,
** ou NULL s'il n'y avait pas assez de mémoire.  
*/

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*rtn;
	size_t	len;

	len = ft_strlen(s1) + 1;
	rtn = malloc(sizeof(char) * len);
	if (!rtn)
		return (NULL);
	rtn = ft_memcpy(rtn, s1, len);
	return (rtn);
}
