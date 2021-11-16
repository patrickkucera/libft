/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pakucera <pakucera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 14:15:16 by pakucera          #+#    #+#             */
/*   Updated: 2021/11/16 16:58:50 by pakucera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** DESCRIPTION
** vérifie si l'on a un chiffre (0 à 9).

** VALEUR RENVOYÉE
** Les valeurs renvoyées sont non nulles si le caractère c 
** entre dans la catégorie testée, et zéro sinon 
*/

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
