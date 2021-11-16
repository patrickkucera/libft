/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pakucera <pakucera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 13:56:55 by pakucera          #+#    #+#             */
/*   Updated: 2021/11/16 17:04:21 by pakucera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** DESCRIPTION
** tolower() convertit la lettre c en minuscule si c'est possible

** VALEUR RENVOYÉE
La valeur renvoyée est celle de la lettre convertie,
ou bien c si la conversion n'était pas possible. 
*/

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	else
		return (c);
}
