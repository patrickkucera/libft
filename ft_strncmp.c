/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pakucera <pakucera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 16:30:03 by pakucera          #+#    #+#             */
/*   Updated: 2021/12/22 12:54:03 by pakucera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** NOM
** strncmp - Comparaison de deux chaînes  
**
** DESCRIPTION
** La fonction strncmp() est identique sauf qu'elle ne compare que les n 
** (au plus) premiers caractères de s1 et s2.
**
** VALEUR RENVOYÉE
** La fonction strncmp() renvoient un entier inférieur, égal ou supérieur à zéro
** si s1 (ou ses n premiers octets) est respectivement inférieure,
** égale ou supérieure à s2.  
*/

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	if (n == 0)
		return (0);
	while ((unsigned char)*s1 == (unsigned char)*s2 && *s1 != '\0' && n - 1 > 0)
	{
		s1++;
		s2++;
		n--;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
