/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pakucera <pakucera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 15:00:10 by pakucera          #+#    #+#             */
/*   Updated: 2021/12/28 15:00:11 by pakucera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** DESCRIPTION
** toupper() convertit la lettre c en majuscule si c'est possible.

** VALEUR RENVOYÉE
La valeur renvoyée est celle de la lettre convertie,
ou bien c si la conversion n'était pas possible. 
*/

#include "libft.h"

int	ft_toupper(int c)

{
	if (c >= 97 && c <= 122)
		return (c - 32);
	else
		return (c);
}
