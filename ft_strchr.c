/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pakucera <pakucera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 16:15:53 by pakucera          #+#    #+#             */
/*   Updated: 2021/11/17 16:19:16 by pakucera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** NOM 
** strchr, Rechercher un caractère dans une chaîne 
**
** DESCRIPTION
** La fonction strchr() renvoie un pointeur sur la première occurrence
** du caractère c dans la chaîne s.
**
** VALEUR RENVOYÉE
** Les fonctions strchr() renvoient un pointeur sur le caractère correspondant,
** ou NULL si le caractère n'a pas été trouvé.
*/

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return ((char *)str + i);
		++i;
	}
	if (c != '\0')
		return (NULL);
	return ((char *)str + i);
}
