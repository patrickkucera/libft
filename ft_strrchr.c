/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pakucera <pakucera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 15:52:58 by pakucera          #+#    #+#             */
/*   Updated: 2021/11/17 16:02:27 by pakucera         ###   ########.fr       */
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

char	*ft_strrchr(char const *str, int c)
{
	int		i;
	int		tmp;

	i = 0;
	tmp = -1;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			tmp = i;
		++i;
	}
	if (c == '\0')
		return ((char *)str + i);
	if (tmp != -1)
		return ((char *)str + tmp);
	return (NULL);
}
