/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pakucera <pakucera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 16:30:03 by pakucera          #+#    #+#             */
/*   Updated: 2021/11/17 16:33:54 by pakucera         ###   ########.fr       */
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

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && i < n - 1)
		i++;
	return (s1[i] - s2[i]);
}
