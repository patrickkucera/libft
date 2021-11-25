/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minus.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patrickkucera <patrickkucera@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 15:11:09 by pakucera          #+#    #+#             */
/*   Updated: 2021/11/25 17:18:42 by patrickkuce      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (int argc, char** argv)
{
    int		NombreMystere = 0, NombreSaisi = 0;
    char	ContinuePartie = 'y';
	const	int MAX = 100, MIN = 1;
    
	// Génération du nombre aléatoire

    srand(time(NULL));
    
   do /* La boucle du programme. Elle se répète tant que l'utilisateur n'indique pas qu il souhaite arreter */
   {
	    if (ContinuePartie == 'y')
		{
			NombreMystere = (rand() % (MAX - MIN + 1)) + MIN;
			do /* La boucle du programme. Elle se répète tant que l'utilisateur n'a pas trouvé le nombre mystère */
			{
			// On demande le nombre
			printf("Quel est le nombre ?\n");
			scanf("%d", &NombreSaisi);
			   
			// On compare le nombre saisi avec le nombre mystère
			if (NombreMystere < NombreSaisi)
				printf("C'est plus petit\n");
			else if (NombreMystere > NombreSaisi)
				printf("c'est plus grand\n");
			else
				printf ("Bravo vous avez trouvez le numero Mystere\n");
			} while (NombreMystere != NombreSaisi);
		}		
		// On demande si il veut continuer la partie	
		printf("Continue la partie ?\ny/n\n");
		scanf("%s", &ContinuePartie);
		
		if (ContinuePartie == 'y')
			ContinuePartie = 'y';
		else
			ContinuePartie = 'n';
	} while (ContinuePartie != 'n');
   	return (0);
}

 
