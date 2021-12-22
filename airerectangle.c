/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   airerectangle.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pakucera <pakucera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 16:30:23 by pakucera          #+#    #+#             */
/*   Updated: 2021/11/26 16:38:03 by pakucera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

double	airerectangle(double nombre1, double nombre2)
{
	return (nombre1 * nombre2);
}

int main(int argc, char *argv[])
{
	printf ("Longeur de 5 et largeur de 10 = %.2f\n", airerectangle(5, 10));
	return (0);
}
