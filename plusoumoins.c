/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   plusoumoins.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patrickkucera <patrickkucera@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 15:11:09 by pakucera          #+#    #+#             */
/*   Updated: 2021/11/28 01:31:05 by patrickkuce      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int menu()
{
    int choix = 0;
    
    while (choix < 1 || choix > 3)
    {
        printf("Menu :\n");
        printf("1 : Niveau 1\n");
        printf("2 : Niveau 2\n");
        printf("3 : Niveau 3\n");
        printf("Votre choix ? ");
        scanf("%d", &choix);
    }    
    
    return choix;
}    

int main (int argc, char** argv)
{
    int		NombreMystere = 0, NombreSaisi = 0;
    char	ContinuePartie = 'y';
	int 	MIN = 1;
	int		NOMBREMAX = 10; 
    
	// Génération du nombre aléatoire

    srand(time(NULL));
    
   do /* La boucle du programme. Elle se répète tant que l'utilisateur n'indique pas qu il souhaite arreter */
   {
	   switch (menu())
    {
        case 1:
            NOMBREMAX = 100;
            break;
        case 2:
            NOMBREMAX = 1000;
            break;
        case 3:
            NOMBREMAX = 10000;
            break;
    }
	    if (ContinuePartie == 'y')
		{
			NombreMystere = (rand() % (NOMBREMAX - MIN + 1)) + MIN;
			int	NombreCoups = 0;
			do /* La boucle du programme. Elle se répète tant que l'utilisateur n'a pas trouvé le nombre mystère */
			{
			// On demande le nombre
			printf("Quel est le nombre ?\n");
			scanf("%d", &NombreSaisi);
			NombreCoups++;

			// On compare le nombre saisi avec le nombre mystère
			if (NombreMystere < NombreSaisi)
				printf("C'est plus petit\n");
			else if (NombreMystere > NombreSaisi)
				printf("c'est plus grand\n");
			else
				printf ("Bravo vous avez trouvez le numero Mystere en %d coups\n", NombreCoups);
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
