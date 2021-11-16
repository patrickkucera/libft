/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pakucera <pakucera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 13:12:49 by pakucera          #+#    #+#             */
/*   Updated: 2021/11/16 16:47:10 by pakucera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
La fonction strlen() calcule la longueur de la chaîne de caractères s, 
sans compter l'octet nul « \0 » final.

VALEUR RENVOYÉE
La fonction strlen() renvoie le nombre de caractères dans la chaîne s.  
*/

#include <string.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}
