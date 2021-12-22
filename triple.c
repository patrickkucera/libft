/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   triple.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pakucera <pakucera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 15:25:44 by pakucera          #+#    #+#             */
/*   Updated: 2021/11/26 16:25:46 by pakucera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

double	triple(double nombre)
{
	return (nombre / 6.55957);
}

int	main(int argc, char *argv[])
{
	int	nombreentre = 0;
	    
    printf("Entrez un nombre... ");
    scanf("%d", &nombreentre);
    
  
    printf("Le triple de ce nombre est %f\n", triple(nombreentre));
    
    return (0);
}
