/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pakucera <pakucera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 14:55:57 by pakucera          #+#    #+#             */
/*   Updated: 2021/12/28 14:55:59 by pakucera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** DESCRIPTION
** Vérifie si l'on a un caractère alphanumérique. 
** C'est équivalent à (isalpha(c) || isdigit(c)).

** VALEUR RENVOYÉE
** Les valeurs renvoyées sont non nulles si le caractère c 
** entre dans la catégorie testée, et zéro sinon  
*/

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 48 && c <= 57) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
