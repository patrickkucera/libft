/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pakucera <pakucera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 12:50:59 by pakucera          #+#    #+#             */
/*   Updated: 2021/11/16 17:06:10 by pakucera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** DESCRIPTION
** vérifie si l'on a un caractère alphabétique. Dans la localisation "C" 
** standard, c'est équivalent à (isupper(c) || islower(c)). 
** Dans certaines localisations, il peut y avoir des caractères 
** supplémentaires pour lesquels isalpha() est vrai, c'est-à-dire 
** pour des lettres qui ne sont ni majuscules ni minuscules.

** VALEUR RENVOYÉE
** Les valeurs renvoyées sont non nulles si le caractère c 
** entre dans la catégorie testée, et zéro sinon 
*/

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
