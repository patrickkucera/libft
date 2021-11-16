/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pakucera <pakucera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 14:31:17 by pakucera          #+#    #+#             */
/*   Updated: 2021/11/16 16:59:06 by pakucera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** DESCRIPTION
** vérifie s'il s'agit d'un caractère imprimable, y compris l'espace.

** VALEUR RENVOYÉE
** Les valeurs renvoyées sont non nulles si le caractère c 
** entre dans la catégorie testée, et zéro sinon 
*/

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
	{
		return (1);
	}
	return (0);
}
