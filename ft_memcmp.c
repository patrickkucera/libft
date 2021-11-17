/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pakucera <pakucera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 16:04:02 by pakucera          #+#    #+#             */
/*   Updated: 2021/11/17 16:14:13 by pakucera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** NOM
** memcmp - Comparaison de zones mémoire 
** 
** DESCRIPTION
** La fonction memcmp() compare les n premiers octets des zones mémoire 
** s1 et s2. Elle renvoie un entier inférieur, égal, ou supérieur à zéro,
** si s1 est respectivement inférieure, égale ou supérieur à s2.  
**
** VALEUR RENVOYÉE
** La fonction memcmp() renvoie un entier négatif, nul ou positif si les n 
** premiers octets de s1 sont respectivement inférieurs, égaux ou 
** supérieurs aux n premiers octets de s2. 
*/

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char		*str1;
	const unsigned char		*str2;

	if (s1 == s2 || n == 0)
		return (0);
	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	while (n--)
	{
		if (*str1 != *str2)
			return (*str1 - *str2);
		if (n)
		{
			str1++;
			str2++;
		}
	}
	return (0);
}
